void bhv_cheezeplat_loop(void) {
    if(cur_obj_is_mario_on_platform()) {
        o->oAction = 1;
    }
    if(o->oAction == 1) {
        if(o->oPlatformSpeed < 80.0f && o->oPosY < 500.0f)
            o->oPlatformSpeed += 1.0f;
        else if(o->oPlatformSpeed > 0.0f && o->oPosY > 500.0f)
             o->oPlatformSpeed -= 2.0f;
        o->oVelZ = -o->oPlatformSpeed;
        o->oVelY = o->oPlatformSpeed;
        o->oPosY += o->oVelY;
        o->oPosZ += o->oVelZ;
    }
}

void bhv_cheezebombwall_loop(void) {
    if (o->collidedObjs[0] != 0) {
        if(o->collidedObjs[0]->behavior == segmented_to_virtual(bhvBobomb) && o->collidedObjs[0]->oAction == 3)
            obj_mark_for_deletion(o);
        else
            o->collidedObjs[0] = 0;
    }
    o->oInteractStatus = 0;
}