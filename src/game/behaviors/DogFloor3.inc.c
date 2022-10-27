


#define SET_AC(x) do{\
	o->oAction = x;\
	o->oTimer = 0;\
} while (0);
void bhv_DogFloor3_init(void) {
	o->oAction = DF6_NORMAL;
}
void bhv_DogFloor3_loop(void) {
	struct Object *eater;
	float dist;
	s16 colFlags = object_step();
	switch (o->oAction) {
		case DF6_NORMAL:
			dog_FollowMario();
			if (gCamera->cutscene == CUTSCENE_2639FINALCUTSCENE) {
				SET_AC(DF6_APPROACH);
			}
			break;
		case DF6_APPROACH:
			cur_obj_init_animation(DOG_ANIM_RUN);
			eater = cNearestObj_Bhv(bhv2639FinalPresent, &dist);
			if (eater) {
				obj_turn_toward_object(o, eater, 16, 0x800);
			}
			o->oForwardVel = 0;
			if (o->oTimer >= 60) {
				SET_AC(DF6_JUMP);
			}
			break;
		case DF6_JUMP:
			cur_obj_init_animation(DOG_ANIM_POUNCE);
			o->oVelY = 20.0f;
			o->oForwardVel = 20.0f;
			SET_AC(DF6_IN_AIR);	
			break;
		case DF6_IN_AIR:
			cur_obj_move_standard(78);
			cur_obj_move_xz_using_fvel_and_yaw();
			o->oVelY--;
			if (colFlags & (OBJ_COL_FLAG_GROUNDED | OBJ_COL_FLAG_UNDERWATER)) {
				SET_AC(DF6_SWIM);
			}
			break;
		case DF6_SWIM:

			break;

	}
	o->oTimer++;
	// char dbg[50];
	// sprintf(dbg, "TM %d", o->oTimer);
	// print_text_fmt_int(50, 80, dbg);
}
