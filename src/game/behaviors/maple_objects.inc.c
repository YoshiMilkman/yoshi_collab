void bhv_cherry_tree_loop(void) {
    if (o->oTimer < 10) {
        obj_scale_xyz(o, 0.1f, ((f32) o->oTimer) / 10.0f, 0.1f);
    }
    else if (o->oTimer >= 10 && o->oTimer < 20) {
        obj_scale_xyz(o, ((f32) (o->oTimer - 9)) / 10.0f, 1.0f - (((f32) (o->oTimer - 9)) / 30.0f), ((f32) (o->oTimer - 9)) / 10.0f);
    }
    else if (o->oTimer >= 20 && o->oTimer < 30) {
        obj_scale_xyz(o, 1, ((f32) ((o->oTimer)) / 30.0f), 1);
    }
    else {
        obj_scale_xyz(o, 1, 1, 1);

        if (o->oTimer == 30) {
            s16 remainingTriggers = count_objects_with_behavior(bhvTreeNut);
             if (remainingTriggers == 0) {
                struct Object *starObj = spawn_object_abs_with_rot(o, 0, MODEL_STAR, bhvStarSpawnCoordinates, gMarioObject->oPosX, gMarioObject->oPosY + 300, gMarioObject->oPosZ, 0, 0, 0);
                starObj->oBehParams = 0x05010000;
                starObj->oHomeX = starObj->oPosX;
                starObj->oHomeY = starObj->oPosY;
                starObj->oHomeZ = starObj->oPosZ;
            }
        }
    }
}

static struct ObjectHitbox sTreeNutHitbox = {
    /* interactType:      */ INTERACT_GRABBABLE,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 65,
    /* height:            */ 113,
    /* hurtboxRadius:     */ 30,
    /* hurtboxHeight:     */ 100,
};

void bhv_tree_nut_init(void) {
    o->oGravity = 2.5f;
    o->oFriction = 0.8f;
    o->oBuoyancy = 1.3f;
    //o->oInteractionSubtype = INT_SUBTYPE_KICKABLE;

}

void bhv_tree_nut_loop(void) {
    switch (o->oHeldState) {
            case HELD_FREE:
            case HELD_THROWN:
                o->header.gfx.node.flags &= ~GRAPH_RENDER_INVISIBLE;
    obj_set_hitbox(o, &sTreeNutHitbox);
    object_step_without_floor_orient();
    cur_obj_become_tangible();

    struct Object *dirtPile;
    struct Object *sussy;
    dirtPile = cur_obj_nearest_object_with_behavior(bhvDirtPile);
    if (dirtPile && dirtPile->oAction == 0 && absf(o->oPosX - dirtPile->oPosX) < 200.0f && absf(o->oPosZ - dirtPile->oPosZ) < 200.0f) {
            play_sound(SOUND_GENERAL2_RIGHT_ANSWER, gGlobalSoundSource);
            o->oPosX = dirtPile->oPosX;
            o->oPosY = dirtPile->oPosY;
            o->oPosZ = dirtPile->oPosZ;
                sussy = spawn_object(o,MODEL_DOG,bhvDogRovert);
                sussy->oPosY += 1000.0f;
                dirtPile->parentObj = sussy;
                o->parentObj = dirtPile;
                //cur_obj_scale_over_time(SCALE_AXIS_Y, 5, 1.0f, 0.2f);
                dirtPile->oAction = 3;
        }
    if (o->parentObj && o->parentObj->oAction == 1) {
        obj_mark_for_deletion(o);
    }



    o->oInteractStatus = 0;
                break;

            case HELD_HELD:
            cur_obj_become_intangible();
            o->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;
                break;
    
    }

    //object_step();
}