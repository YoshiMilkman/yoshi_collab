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

#include "make_const_nonconst.h"
#include "levels/bbh/header.h"

const LevelScript level_bbh_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _spooky_yay0SegmentRomStart, _spooky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group6_yay0SegmentRomStart, _group6_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_7), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_BOUNCE_CLOUD, bounce_cloud_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_STRETCH_CLOUD, stretch_cloud_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RAINBOW_CLOUD, rainbow_cloud_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CLOUD_RAINBOW, cloud_rainbow_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RAIN_CLOUD, rain_cloud_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_MIST_SECRET, mist_secret_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_FADE_CLOUD, fade_cloud_geo), 

	AREA(1, bbh_area_1),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 100, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 50, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 10154, 176, 7380, 0, 110, 0, 0x000B0000, bhvAirborneDeathWarp),
		MARIO_POS(0x01, 110, 10154, 176, 7380),
		OBJECT(MODEL_NONE, 10154, 176, 7380, 0, 110, 0, 0x000A0000, bhvFlyingWarp),
		OBJECT(MODEL_BOUNCE_CLOUD, -13182, 2710, -13116, 0, 16, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, -13763, 2710, -16967, 0, 9, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, -2766, 3013, -24471, 0, -90, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, -12998, 2710, -19572, 0, -38, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, 473, 167, 7858, 0, 16, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, 1793, 767, 8640, 0, 16, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, 1240, 1367, 7256, 0, 16, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, 9647, 934, -10768, 0, 32, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_BOUNCE_CLOUD, 14026, 1810, -8999, 0, -19, 0, 0x00000000, bhvBounceCloud),
		OBJECT(MODEL_FADE_CLOUD, 12439, 145, 9204, 0, -26, 0, 0x00000000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 13660, 289, 8721, 0, -26, 0, 0x001E0000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 13885, 522, 10118, 0, -26, 0, 0x003C0000, bhvFadeCloud),
		OBJECT(MODEL_FADE_CLOUD, 15442, 886, 10006, 0, -26, 0, 0x005A0000, bhvFadeCloud),
		OBJECT(MODEL_NONE, 4577, -705, 11863, 0, 0, 0, 0x00000000, bhvCloud),
		OBJECT(MODEL_MIST_SECRET, -8222, -590, -1562, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_MIST_SECRET, -5978, 340, 8491, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_MIST_SECRET, -1052, 340, 1067, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_MIST_SECRET, -6775, -590, -245, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_MIST_SECRET, -7118, -590, -1521, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_RAINBOW_CLOUD, 9861, 145, 5607, 0, 177, 0, 0x00000000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 15216, 572, -7039, 0, 98, 0, 0x00010000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 17726, 572, -7880, 0, -82, 0, 0x00010000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 15082, 572, -8030, 0, 98, 0, 0x00010000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 17593, 572, -8872, 0, -82, 0, 0x00010000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 14949, 572, -9021, 0, 98, 0, 0x00010000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 16322, 572, -9710, 0, -82, 0, 0x00010000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 9354, 145, 2287, 0, 87, 0, 0x00000000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 10710, 145, 1711, 0, 87, 0, 0x00000000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 11634, 145, 1078, 0, 87, 0, 0x00000000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 14986, 145, 1527, 0, 177, 0, 0x00000000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 7472, -705, 14681, 0, 90, 0, 0x00010000, bhvRainbowCloud),
		OBJECT(MODEL_RAINBOW_CLOUD, 10472, -705, 14181, 0, -90, 0, 0x00010000, bhvRainbowCloud),
		OBJECT(MODEL_RAIN_CLOUD, -12252, 1418, -7372, 0, 0, 0, 0x00000000, bhvRainCloud),
		OBJECT(MODEL_STAR, 3172, 4060, -24471, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_STAR, 16682, 2912, -5825, 0, 16, 0, 0x03000000, bhvStar),
		OBJECT(MODEL_NONE, -7323, -390, -854, 0, 0, 0, 0x02000000, bhvHiddenStar),
		OBJECT(MODEL_STRETCH_CLOUD, 1206, 3394, -24464, 0, 0, 0, 0x00000000, bhvStretchCloud),
		OBJECT(MODEL_STRETCH_CLOUD, -4771, 3013, -22537, 0, 90, 0, 0x00000000, bhvStretchCloud),
		OBJECT(MODEL_STRETCH_CLOUD, -3671, 3013, -23737, 0, 90, 0, 0x00000000, bhvStretchCloud),
		OBJECT(MODEL_STRETCH_CLOUD, -2257, 24, 3042, 0, 90, 0, 0x00000000, bhvStretchCloud),
		TERRAIN(bbh_area_1_collision),
		MACRO_OBJECTS(bbh_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 110, 10154, 176, 7380),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
