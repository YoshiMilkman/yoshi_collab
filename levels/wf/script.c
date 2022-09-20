#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/wf/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wf_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bbh_skybox_yay0SegmentRomStart, _bbh_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group2_yay0SegmentRomStart, _group2_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group2_geoSegmentRomStart, _group2_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _bbh_skybox_mio0SegmentRomStart, _bbh_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_3), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_PALM_TREE, wf_palm_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_KOKO, koko_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_JETSKI, jetski_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_CRATE, crate_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SANDPILE, sandpile_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SAND_PILLAR, sand_pillar_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SAND_SLOPE, sand_slope_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_KTQ_RING, ktq_ring_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wf_area_1),
		WARP_NODE(0x0A, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0D, LEVEL_WF, 0x02, 0x0D, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_WF, 0x03, 0x0B, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -6743, 1404, 1534, 180, 0, 90, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -6743, 1404, 1534),
		OBJECT(MODEL_NONE, 6215, 2944, -5966, 0, 0, 0, (100 << 24) | (0x0D << 16), bhvWarp),
		OBJECT(MODEL_BLOOPER, 1643, -344, -1211, 0, 21, 0, 0x00000000, bhvBlooper),
		OBJECT(MODEL_BLOOPER, -418, -344, 1938, 0, 21, 0, 0x00000000, bhvBlooper),
		OBJECT(MODEL_BLOOPER, -1367, -344, -780, 0, 21, 0, 0x00000000, bhvBlooper),
		OBJECT(MODEL_PURPLE_SWITCH, 3986, 1355, 4909, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, 3786, 1355, 4909, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, 3586, 1355, 4909, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, 3586, 1555, 4709, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, 3386, 1555, 4709, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, 3186, 1555, 4709, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, 3186, 1755, 4509, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, 2986, 1755, 4509, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, 2786, 1755, 4509, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, 1986, 1755, 4509, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, 1786, 1755, 4509, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, 986, 1755, 4109, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, 786, 1755, 4109, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, 586, 1955, 4109, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, 386, 2155, 4109, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, 186, 2155, 4109, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, -14, 2355, 4109, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, -214, 2355, 4109, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, -1414, 1955, 4109, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, -1614, 1955, 4109, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, -1814, 1955, 4109, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, -2014, 1955, 4109, 0, 90, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_NONE, 184, 688, 385, 0, 90, 0, (COIN_FORMATION_FLAG_RING | COIN_FORMATION_BP_FLYING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -2285, 688, 612, 0, 90, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_LINE | COIN_FORMATION_BP_FLYING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 6849, 688, -460, 0, -9, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_LINE | COIN_FORMATION_BP_FLYING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 5811, 688, 3949, 0, -11, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_LINE | COIN_FORMATION_BP_FLYING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 6398, 688, 1635, 0, 90, 0, (COIN_FORMATION_FLAG_RING | COIN_FORMATION_BP_FLYING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -6316, 988, 4785, 0, 11, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_LINE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -5370, 988, 7683, 0, 11, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_LINE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -3384, 988, 8707, 0, 68, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_LINE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1258, 988, 9010, 0, 86, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_LINE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 2196, 1061, 8561, 0, 86, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_RING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 4358, 1355, 6472, 0, 86, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_RING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -825, 1188, -3418, 0, 90, 0, (COIN_FORMATION_BP_SHAPE_VERTICAL_RING | COIN_FORMATION_BP_FLYING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 2022, 1188, 650, 0, -180, 0, (COIN_FORMATION_BP_SHAPE_VERTICAL_RING | COIN_FORMATION_BP_FLYING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1658, 1188, 4547, 0, 90, 0, (COIN_FORMATION_BP_SHAPE_VERTICAL_RING | COIN_FORMATION_BP_FLYING << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -7087, 988, -2846, 0, -8, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_LINE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -6758, 988, -4807, 0, -22, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_LINE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -3975, 988, -6973, 0, -71, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_LINE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1387, 988, -7464, 0, -87, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_LINE << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1171, 988, -7371, 0, -103, 0, (COIN_FORMATION_BP_SHAPE_HORIZONTAL_LINE << 16), bhvCoinFormation),
		OBJECT(MODEL_WF_CRATE, -6669, 845, -789, 0, 10, 0, (BREAKABLE_BOX_BP_3_COINS << 16), bhvBreakableBox),
		OBJECT(MODEL_WF_CRATE, -6549, 845, -724, 0, -25, 0, (BREAKABLE_BOX_BP_3_COINS << 16), bhvBreakableBox),
		OBJECT(MODEL_WF_CRATE, -6669, 845, -789, 0, 10, 0, (BREAKABLE_BOX_BP_3_COINS << 16), bhvBreakableBox),
		OBJECT(MODEL_WF_CRATE, 559, 785, 8643, 1, 10, 5, (BREAKABLE_BOX_BP_3_COINS << 16), bhvBreakableBox),
		OBJECT(MODEL_WF_CRATE, 585, 781, 8872, 1, 1, 5, (BREAKABLE_BOX_BP_3_COINS << 16), bhvBreakableBox),
		OBJECT(MODEL_WF_CRATE, 538, 984, 8774, 1, 10, 5, (BREAKABLE_BOX_BP_3_COINS << 16), bhvBreakableBox),
		OBJECT(MODEL_WF_CRATE, 614, 774, 9351, 1, 4, 2, (BREAKABLE_BOX_BP_3_COINS << 16), bhvBreakableBox),
		OBJECT(MODEL_WF_CRATE, 628, 778, 9598, 1, -5, 5, (BREAKABLE_BOX_BP_3_COINS << 16), bhvBreakableBox),
		OBJECT(MODEL_WF_CRATE, 3522, 1061, 7590, 0, -17, 0, (BREAKABLE_BOX_BP_3_COINS << 16), bhvBreakableBox),
		OBJECT(MODEL_WF_CRATE, 3741, 1061, 7655, 0, -21, 0, (BREAKABLE_BOX_BP_3_COINS << 16), bhvBreakableBox),
		OBJECT(MODEL_WF_CRATE, 3961, 1061, 7706, 0, -11, 0, (BREAKABLE_BOX_BP_3_COINS << 16), bhvBreakableBox),
		OBJECT(MODEL_WF_CRATE, 4411, 818, -5135, 0, 15, 0, (BREAKABLE_BOX_BP_3_COINS << 16), bhvBreakableBox),
		OBJECT(MODEL_WF_CRATE, 4450, 818, -4903, 0, 6, 0, (BREAKABLE_BOX_BP_3_COINS << 16), bhvBreakableBox),
		OBJECT(MODEL_WF_CRATE, 4433, 1018, -5030, 0, 21, 0, (BREAKABLE_BOX_BP_3_COINS << 16), bhvBreakableBox),
		OBJECT(MODEL_WF_CRATE, 5911, 818, -3995, 0, 15, 0, (BREAKABLE_BOX_BP_3_COINS << 16), bhvBreakableBox),
		OBJECT(MODEL_WF_CRATE, 5946, 818, -3775, 0, 6, 0, (BREAKABLE_BOX_BP_3_COINS << 16), bhvBreakableBox),
		OBJECT(MODEL_WF_CRATE, 5702, 813, -3927, 0, 21, 0, (BREAKABLE_BOX_BP_3_COINS << 16), bhvBreakableBox),
		OBJECT(MODEL_NONE, 9520, 806, 9068, 0, 0, 0, 0x00000000, bhvKoopaRaceEndpoint),
		OBJECT(MODEL_NONE, -6319, 861, 2561, 0, 0, 0, 0x00000000, bhvKokoTripletSpawner),
		OBJECT(MODEL_NONE, 3913, 861, -5927, 0, 0, 0, 0x00000000, bhvKokoTripletSpawner),
		OBJECT(MODEL_NONE, 6767, 861, -2212, 0, 0, 0, 0x00000000, bhvKokoTripletSpawner),
		OBJECT(MODEL_NONE, 9652, 861, 9434, 0, 0, 0, 0x00000000, bhvKokoTripletSpawner),
		OBJECT(MODEL_NONE, 5207, 861, -4369, 0, 0, 0, 0x00000000, bhvKokoTripletSpawner),
		OBJECT(MODEL_NONE, -203, 846, -7521, 0, 0, 0, 0x00000000, bhvKokoTripletSpawner),
		OBJECT(MODEL_NONE, -361, 763, 9102, 0, 0, 0, 0x00000000, bhvKokoTripletSpawner),
		OBJECT(MODEL_NONE, -5929, 758, -5913, 0, 0, 0, 0x00000000, bhvKokoTripletSpawner),
		OBJECT(MODEL_PURPLE_SWITCH, 4833, 1355, 5742, 0, -23, 0, 0x00000000, bhvFloorSwitchHiddenObjects),
		OBJECT(MODEL_RED_COIN, 1457, -844, 252, 0, 21, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -839, 117, 2175, 0, 21, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -465, 100, -619, 0, 21, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1270, 179, -1535, 0, 21, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1780, -830, 234, 0, 21, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -1626, -773, 2102, 0, 21, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 385, -73, -1163, 0, 21, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -208, 436, 380, 0, 21, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 189, -344, 381, 0, 21, 0, (4 << 24), bhvHiddenRedCoinStar),
		OBJECT(MODEL_SANDPILE, -4441, 787, 7891, 0, -31, 0, (8 << 8) | (35), bhvSandPile),
		OBJECT(MODEL_SANDPILE, -4943, 787, 7589, 0, 0, 0, (15 << 8) | (25), bhvSandPile),
		OBJECT(MODEL_SANDPILE, -4887, 787, 6946, 0, 0, 0, (20 << 8) | (15), bhvSandPile),
		OBJECT(MODEL_SANDPILE, -5339, 787, 6548, 0, 0, 0, (1 << 16) | (25 << 8) | (15), bhvSandPile),
		OBJECT(MODEL_SANDPILE, -5359, 787, 5919, 0, 113, 0, (1 << 16) | (30 << 8) | (15), bhvSandPile),
		OBJECT(MODEL_SANDPILE, -5699, 787, 4948, 0, 17, 0, (1 << 24) | (0 << 16) | (35 << 8) | (15), bhvSandPile),
		OBJECT(MODEL_NONE, -543, -844, 1806, 0, 21, 0, 0x00000000, bhvSeaweedBundle),
		OBJECT(MODEL_NONE, 335, -844, 10, 0, 21, 0, 0x00000000, bhvSeaweedBundle),
		OBJECT(MODEL_NONE, -610, -844, 487, 0, 21, 0, 0x00000000, bhvSeaweedBundle),
		OBJECT(MODEL_NONE, 708, -844, -1698, 0, 21, 0, 0x00000000, bhvSeaweedBundle),
		OBJECT(MODEL_NONE, 1635, -844, -74, 0, 21, 0, 0x00000000, bhvSeaweedBundle),
		OBJECT(MODEL_NONE, -1786, -844, 237, 0, 21, 0, 0x00000000, bhvSeaweedBundle),
		OBJECT(MODEL_NONE, -3970, 229, -3659, 0, 21, 0, 0x00000000, bhvSeaweedBundle),
		OBJECT(MODEL_NONE, -3588, 267, 3108, 0, 21, 0, 0x00000000, bhvSeaweedBundle),
		OBJECT(MODEL_NONE, 1630, 284, 5698, 0, 21, 0, 0x00000000, bhvSeaweedBundle),
		OBJECT(MODEL_NONE, 3731, 244, 1437, 0, 21, 0, 0x00000000, bhvSeaweedBundle),
		OBJECT(MODEL_NONE, 8635, 252, -1583, 0, 21, 0, 0x00000000, bhvSeaweedBundle),
		OBJECT(MODEL_NONE, -2201, 270, -10615, 0, 21, 0, 0x00000000, bhvSeaweedBundle),
		OBJECT(MODEL_NONE, -9718, 253, -200, 0, 21, 0, 0x00000000, bhvSeaweedBundle),
		OBJECT(MODEL_NONE, -2681, 250, 12052, 0, 21, 0, 0x00000000, bhvSeaweedBundle),
		OBJECT(MODEL_KTQ_RING, -4253, 1006, 609, 0, 0, 0, (1 << 24) | (0x0B << 16), bhvWarp),
		OBJECT(MODEL_EXCLAMATION_BOX, 9482, 1047, 8705, 0, 0, 0, (EXCLAMATION_BOX_BP_JETSKI << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -3533, 953, 630, 0, 0, 0, (EXCLAMATION_BOX_BP_JETSKI << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 7389, 1002, -7436, 0, 0, 0, (EXCLAMATION_BOX_BP_JETSKI << 16), bhvExclamationBox),
		OBJECT(MODEL_STAR, -2014, 2455, 4109, 0, 90, 0, (3 << 24), bhvStar),
		OBJECT(MODEL_HOOT, 3453, 1326, -6383, 0, 0, 0, 0x00000000, bhvHoot),
		OBJECT(MODEL_WF_PALM_TREE, -7124, 846, -923, 0, 0, 0, 0x00000000, bhvPalmTree),
		OBJECT(MODEL_WF_PALM_TREE, -6430, 846, -320, 0, 0, 0, 0x00000000, bhvPalmTree),
		OBJECT(MODEL_WF_PALM_TREE, -6874, 846, 2911, 0, 0, 0, 0x00000000, bhvPalmTree),
		OBJECT(MODEL_WF_PALM_TREE, -6835, 846, 2245, 0, 0, 0, 0x00000000, bhvPalmTree),
		OBJECT(MODEL_WF_PALM_TREE, -6033, 846, 2231, 0, 0, 0, 0x00000000, bhvPalmTree),
		OBJECT(MODEL_WF_PALM_TREE, 9272, 806, 9764, 0, 0, 0, 0x00000000, bhvPalmTree),
		OBJECT(MODEL_WF_PALM_TREE, 3453, 817, -6383, 0, 0, 0, 0x00000000, bhvPalmTree),
		OBJECT(MODEL_WF_PALM_TREE, 6255, 817, -3514, 0, 0, 0, 0x00000000, bhvPalmTree),
		OBJECT(MODEL_WF_PALM_TREE, 3825, 817, -5329, 0, 0, 0, 0x00000000, bhvPalmTree),
		OBJECT(MODEL_WF_PALM_TREE, 4743, 817, -4133, 0, 0, 0, 0x00000000, bhvPalmTree),
		OBJECT(MODEL_KOOPA_WITH_SHELL, -6746, 1006, 373, 0, 10, 0, (1 << 24) | (KOOPA_BP_KOOPA_THE_QUICK_BOB << 16), bhvKoopa),
		TERRAIN(wf_area_1_collision),
		ROOMS(wf_area_1_collision_rooms),
		MACRO_OBJECTS(wf_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, wf_area_2),
		WARP_NODE(0x0D, LEVEL_WF, 0x02, 0x0D, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_WF, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BULLY_BOSS, 590, -438, 0, 0, 0, 0, 0x020D0000, bhvBigBully),
		OBJECT(MODEL_EXCLAMATION_BOX, -5563, -2562, 0, 0, 0, 0, (EXCLAMATION_BOX_BP_JETSKI << 16), bhvExclamationBox),
		OBJECT(MODEL_NONE, -5942, -2697, -6, 0, 0, 0, 0x000D0000, bhvSpinAirborneWarp),
		TERRAIN(wf_area_2_collision),
		MACRO_OBJECTS(wf_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_HOT),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, wf_area_3),
		WARP_NODE(0x0B, LEVEL_WF, 0x03, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_WF, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 0, 1696, 0, 0, 0, 0, 0x000B0000, bhvSpinAirborneWarp),
		TERRAIN(wf_area_3_collision),
		MACRO_OBJECTS(wf_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_SPOOKY),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -6743, 1404, 1534),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
