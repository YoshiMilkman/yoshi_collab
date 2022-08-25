#include "src/game/envfx_snow.h"

const GeoLayout lll_area_4_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 0, 88, 0),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_OPAQUE, 24248),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, -483, 1220, 0),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, -180, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, lll_dl_lantern_001_mesh_layer_4),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 4028, 1523, -787),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, -180, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, lll_dl_lantern_002_mesh_layer_4),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 4028, 1924, 400),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, -180, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, lll_dl_lantern_003_mesh_layer_4),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_Plane_003_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE_DECAL, lll_dl_Plane_004_mesh_layer_2),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout lll_area_4[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 61200, 0, 0, 61200, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, lll_area_4_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_OPAQUE_DECAL, lll_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, lll_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};