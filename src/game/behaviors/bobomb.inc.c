// bobomb.c.inc

static struct ObjectHitbox sBobombHitbox = {
    /* interactType:      */ INTERACT_GRABBABLE,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 65,
    /* height:            */ 113,
    /* hurtboxRadius:     */ 0,
    /* hurtboxHeight:     */ 0,
};

void bhv_bobomb_init(void) {
    o->oGravity  = 2.5f;
    o->oFriction = 0.8f;
    o->oBuoyancy = 1.3f;
    o->oInteractionSubtype = INT_SUBTYPE_KICKABLE;
}

void bobomb_spawn_coin(void) {
    if (((o->oBehParams >> 8) & 0x1) == 0) {
        obj_spawn_yellow_coins(o, 1);
        o->oBehParams = 0x100;
        set_object_respawn_info_bits(o, RESPAWN_INFO_TYPE_32);
    }
}

void bobomb_act_explode(void) {
    struct Object *explosion;
    if (o->oTimer < 5)
        cur_obj_scale(1.0f + (f32) o->oTimer / 5.0f);
    else {
        explosion = spawn_object(o, MODEL_EXPLOSION, bhvExplosion);
        explosion->oGraphYOffset += 100.0f;
if (o->oBehParams2ndByte == 0x30) {
    obj_mark_for_deletion(o);
}
else {
        bobomb_spawn_coin();
        create_respawner(MODEL_BLACK_BOBOMB, bhvBobomb, 3000);
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
}
    }
}


void bobomb_check_interactions(void) {
    obj_set_hitbox(o, &sBobombHitbox);
    if ((o->oInteractStatus & INT_STATUS_INTERACTED) != 0)
    {
        if ((o->oInteractStatus & INT_STATUS_MARIO_KNOCKBACK_DMG) != 0)
        {
            o->oMoveAngleYaw = gMarioObject->header.gfx.angle[1];
            o->oForwardVel   = 25.0f;
            o->oVelY         = 30.0f;
            o->oAction       = BOBOMB_ACT_LAUNCHED;
        }

        if ((o->oInteractStatus & INT_STATUS_TOUCHED_BOB_OMB) != 0 && o->oBehParams2ndByte != 0x30)
            o->oAction = BOBOMB_ACT_EXPLODE;

        o->oInteractStatus = 0;
    }

    if (obj_attack_collided_from_other_object(o) == 1 && o->oBehParams2ndByte != 0x30)
        o->oAction = BOBOMB_ACT_EXPLODE;
}

void bobomb_act_patrol(void) {
    s16 collisionFlags;

    o->oForwardVel = 5.0f;

    collisionFlags = object_step();
    if ((obj_return_home_if_safe(o, o->oHomeX, o->oHomeY, o->oHomeZ, 400) == 1)
        && (obj_check_if_facing_toward_angle(o->oMoveAngleYaw, o->oAngleToMario, 0x2000) == TRUE)) {
        o->oBobombFuseLit = 1;
        o->oAction = BOBOMB_ACT_CHASE_MARIO;
    }
    obj_check_floor_death(collisionFlags, sObjFloor);
}

void bobomb_act_chase_mario(void) {
    s16 animFrame, collisionFlags;

    animFrame = ++o->header.gfx.animInfo.animFrame;
    o->oForwardVel = 20.0f;

    collisionFlags = object_step();

    if (animFrame == 5 || animFrame == 16)
        cur_obj_play_sound_2(SOUND_OBJ_BOBOMB_WALK);

    obj_turn_toward_object(o, gMarioObject, 16, 0x800);
    obj_check_floor_death(collisionFlags, sObjFloor);
}

void bobomb_act_launched(void) {
    s16 collisionFlags = object_step();
    if ((collisionFlags & OBJ_COL_FLAG_GROUNDED) == OBJ_COL_FLAG_GROUNDED)
        o->oAction = BOBOMB_ACT_EXPLODE; /* bit 0 */
}

void generic_bobomb_free_loop(void) {
    switch (o->oAction) {
        case BOBOMB_ACT_PATROL:
            bobomb_act_patrol();
            break;

        case BOBOMB_ACT_LAUNCHED:
            bobomb_act_launched();
            break;

        case BOBOMB_ACT_CHASE_MARIO:
            bobomb_act_chase_mario();
            break;

        case BOBOMB_ACT_EXPLODE:
            bobomb_act_explode();
            break;

        case OBJ_ACT_LAVA_DEATH:
            if (obj_lava_death() == 1)
                create_respawner(MODEL_BLACK_BOBOMB, bhvBobomb, 3000);
            break;

        case OBJ_ACT_DEATH_PLANE_DEATH:
            o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
            create_respawner(MODEL_BLACK_BOBOMB, bhvBobomb, 3000);
            break;
    }

    bobomb_check_interactions();

    if (o->oBobombFuseTimer >= 151)
        o->oAction = 3;
}

void stationary_bobomb_free_loop(void) {
    switch (o->oAction) {
        case BOBOMB_ACT_LAUNCHED:
            bobomb_act_launched();
            break;

        case BOBOMB_ACT_EXPLODE:
            bobomb_act_explode();
            break;

        case OBJ_ACT_LAVA_DEATH:
            if (obj_lava_death() == 1)
                create_respawner(MODEL_BLACK_BOBOMB, bhvBobomb, 3000);
            break;

        case OBJ_ACT_DEATH_PLANE_DEATH:
            o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
            create_respawner(MODEL_BLACK_BOBOMB, bhvBobomb, 3000);
            break;
    }

    bobomb_check_interactions();

    if (o->oBobombFuseTimer >= 151)
        o->oAction = 3;
}

void bobomb_free_loop(void) {
    if (o->oBehParams2ndByte == BOBOMB_BP_STYPE_GENERIC)
        generic_bobomb_free_loop();
    else if (o->oBehParams2ndByte == 0x30)
        generic_bobomb_free_loop();
    else
        stationary_bobomb_free_loop();
}

void bobomb_held_loop(void) {
    o->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;
    cur_obj_init_animation(1);
    cur_obj_set_pos_relative(gMarioObject, 0, 60.0f, 100.0f);

    o->oBobombFuseLit = 1;
    if (o->oBobombFuseTimer >= 151) {
        //! Although the Bob-omb's action is set to explode when the fuse timer expires,
        //  bobomb_act_explode() will not execute until the bob-omb's held state changes.
        //  This allows the Bob-omb to be regrabbed indefinitely.
        gMarioObject->oInteractStatus |= INT_STATUS_MARIO_DROP_OBJECT;
        o->oAction = BOBOMB_ACT_EXPLODE;
    }
}

void bobomb_dropped_loop(void) {
    cur_obj_get_dropped();

    o->header.gfx.node.flags &= ~GRAPH_RENDER_INVISIBLE;
    cur_obj_init_animation(0);

    o->oHeldState = 0;
    o->oAction = BOBOMB_ACT_PATROL;
}

void bobomb_thrown_loop(void) {
    cur_obj_enable_rendering_2();

    o->header.gfx.node.flags &= ~GRAPH_RENDER_INVISIBLE;
    o->oHeldState  = 0;
    o->oFlags     &= ~OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW; /* bit 3 */
    o->oForwardVel = 25.0f;
    o->oVelY       = 20.0f;
    o->oAction     = BOBOMB_ACT_LAUNCHED;
}

// sp18 = blinkTimer

void curr_obj_random_blink(s32 *blinkTimer) {
    if (*blinkTimer == 0) {
        if ((s16)(random_float() * 100.0f) == 0) {
            o->oAnimState = 1;
            *blinkTimer = 1;
        }
    } else {
        (*blinkTimer)++;
        if (*blinkTimer >= 6)
            o->oAnimState = 0;
        if (*blinkTimer >= 11)
            o->oAnimState = 1;
        if (*blinkTimer >= 16) {
            o->oAnimState = 0;
            *blinkTimer = 0;
        }
    }
}

void bhv_bobomb_loop(void) {
    s8 dustPeriodMinus1;
    if (is_point_within_radius_of_mario(o->oPosX, o->oPosY, o->oPosZ, 4000) != 0) {
        switch (o->oHeldState) {
            case HELD_FREE:
                bobomb_free_loop();
                break;

            case HELD_HELD:
                bobomb_held_loop();
                break;

            case HELD_THROWN:
                bobomb_thrown_loop();
                break;

            case HELD_DROPPED:
                bobomb_dropped_loop();
                break;
        }

        curr_obj_random_blink(&o->oBobombBlinkTimer);

        if (o->oBobombFuseLit == 1) {
            if (o->oBobombFuseTimer >= 121)
                dustPeriodMinus1 = 1;
            else
                dustPeriodMinus1 = 7;

            if ((dustPeriodMinus1 & o->oBobombFuseTimer)
                == 0) /* oBobombFuseTimer % 2 or oBobombFuseTimer % 8 */
                spawn_object(o, MODEL_SMOKE, bhvBobombFuseSmoke);

            cur_obj_play_sound_1(SOUND_AIR_BOBOMB_LIT_FUSE);

            o->oBobombFuseTimer++;
        }
    }
}

void bhv_bobomb_fuse_smoke_init(void) {
    o->oPosX += (s32)(random_float() * 80.0f) - 40;
    o->oPosY += (s32)(random_float() * 80.0f) + 60;
    o->oPosZ += (s32)(random_float() * 80.0f) - 40;
    cur_obj_scale(1.2f);
}

void bhv_bobomb_buddy_init(void) {
    o->oGravity  = 2.5f;
    o->oFriction = 0.8f;
    o->oBuoyancy = 1.3f;
    o->oInteractionSubtype = INT_SUBTYPE_NPC;
}

void bobomb_buddy_act_idle(void) {

    o->oBobombBuddyPosXCopy = o->oPosX;
    o->oBobombBuddyPosYCopy = o->oPosY;
    o->oBobombBuddyPosZCopy = o->oPosZ;

    if (o->oDistanceToMario < 1000.0f)
        o->oMoveAngleYaw = approach_s16_symmetric(o->oMoveAngleYaw, o->oAngleToMario, 0x140);

    if (o->oInteractStatus == INT_STATUS_INTERACTED)
        o->oAction = BOBOMB_BUDDY_ACT_TURN_TO_TALK;
}

/**
 * Function for the Bob-omb Buddy cannon guy.
 * dialogFirstText is the first dialogID called when Bob-omb Buddy
 * starts to talk to Mario to prepare the cannon(s) for him.
 * Then the camera goes to the nearest cannon, to play the "prepare cannon" cutscene
 * dialogSecondText is called after Bob-omb Buddy has the cannon(s) ready and
 * then tells Mario that is "Ready for blastoff".
 */
void bobomb_buddy_cannon_dialog(s16 dialogFirstText, s16 dialogSecondText) {
    struct Object *cannonClosed;
    s16 buddyText, cutscene;

    switch (o->oBobombBuddyCannonStatus) {
        case BOBOMB_BUDDY_CANNON_UNOPENED:
            buddyText = cutscene_object_with_dialog(CUTSCENE_DIALOG, o, dialogFirstText);
            if (buddyText != 0) {
                save_file_set_cannon_unlocked();
                cannonClosed = cur_obj_nearest_object_with_behavior(bhvCannonClosed);
                if (cannonClosed != 0)
                    o->oBobombBuddyCannonStatus = BOBOMB_BUDDY_CANNON_OPENING;
                else
                    o->oBobombBuddyCannonStatus = BOBOMB_BUDDY_CANNON_STOP_TALKING;
            }
            break;

        case BOBOMB_BUDDY_CANNON_OPENING:
            cannonClosed = cur_obj_nearest_object_with_behavior(bhvCannonClosed);
            cutscene = cutscene_object(CUTSCENE_PREPARE_CANNON, cannonClosed);
            if (cutscene == -1)
                o->oBobombBuddyCannonStatus = BOBOMB_BUDDY_CANNON_OPENED;
            break;

        case BOBOMB_BUDDY_CANNON_OPENED:
            buddyText = cutscene_object_with_dialog(CUTSCENE_DIALOG, o, dialogSecondText);
            if (buddyText != 0)
                o->oBobombBuddyCannonStatus = BOBOMB_BUDDY_CANNON_STOP_TALKING;
            break;

        case BOBOMB_BUDDY_CANNON_STOP_TALKING:
            set_mario_npc_dialog(MARIO_DIALOG_STOP);

            o->activeFlags &= ~ACTIVE_FLAG_INITIATED_TIME_STOP;
            o->oBobombBuddyHasTalkedToMario = BOBOMB_BUDDY_HAS_TALKED;
            o->oInteractStatus = 0;
            o->oAction = BOBOMB_BUDDY_ACT_IDLE;
            o->oBobombBuddyCannonStatus = BOBOMB_BUDDY_CANNON_OPENED;
            break;
    }
}

void bobomb_buddy_act_talk(void) {
    if (set_mario_npc_dialog(MARIO_DIALOG_LOOK_FRONT) == MARIO_DIALOG_STATUS_SPEAK) {
        o->activeFlags |= ACTIVE_FLAG_INITIATED_TIME_STOP;

        switch (o->oBobombBuddyRole) {
            case BOBOMB_BUDDY_ROLE_ADVICE:
                if (cutscene_object_with_dialog(CUTSCENE_DIALOG, o, o->oBehParams2ndByte)
                    != BOBOMB_BUDDY_BP_STYPE_GENERIC) {
                    set_mario_npc_dialog(MARIO_DIALOG_STOP);

                    o->activeFlags &= ~ACTIVE_FLAG_INITIATED_TIME_STOP;
                    o->oBobombBuddyHasTalkedToMario = BOBOMB_BUDDY_HAS_TALKED;
                    o->oInteractStatus = 0;
                    o->oAction = BOBOMB_BUDDY_ACT_IDLE;
                    if (o->oBehParams2ndByte == 0x9B)
                    {
                        koopa_boss_spawn();
                    }
                }
                break;

            case BOBOMB_BUDDY_ROLE_CANNON:
                if (gCurrCourseNum == COURSE_BOB) {
                    bobomb_buddy_cannon_dialog(DIALOG_004, DIALOG_105);
                } else {
                    bobomb_buddy_cannon_dialog(DIALOG_047, DIALOG_106);
                }
                break;
        }
    }
}

void bobomb_buddy_act_turn_to_talk(void) {
    s16 animFrame = o->header.gfx.animInfo.animFrame;

    o->oMoveAngleYaw = approach_s16_symmetric(o->oMoveAngleYaw, o->oAngleToMario, 0x1000);
    if ((s16) o->oMoveAngleYaw == (s16) o->oAngleToMario)
        o->oAction = BOBOMB_BUDDY_ACT_TALK;

    cur_obj_play_sound_2(SOUND_ACTION_READ_SIGN);
}

void bobomb_buddy_actions(void) {
    switch (o->oAction) {
        case BOBOMB_BUDDY_ACT_IDLE:
            bobomb_buddy_act_idle();
            break;

        case BOBOMB_BUDDY_ACT_TURN_TO_TALK:
            bobomb_buddy_act_turn_to_talk();
            break;

        case BOBOMB_BUDDY_ACT_TALK:
            bobomb_buddy_act_talk();
            break;
    }
}

void bhv_bobomb_buddy_loop(void) {
    bobomb_buddy_actions();

    curr_obj_random_blink(&o->oBobombBuddyBlinkTimer);

    o->oInteractStatus = 0;
}
