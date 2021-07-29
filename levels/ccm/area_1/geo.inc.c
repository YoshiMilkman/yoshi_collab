#include "src/game/envfx_snow.h"

const GeoLayout ccm_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, 3384, 0, ccm_dl_bg_mesh_layer_1),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -377, 760, 3026),
		GEO_OPEN_NODE(),
			GEO_RENDER_RANGE(0, 5000),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(1, ccm_dl_bridge_close_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -377, 760, 3026),
		GEO_OPEN_NODE(),
			GEO_RENDER_RANGE(5000, 15000),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(1, ccm_dl_bridge_far_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 63, 897, 1978),
		GEO_OPEN_NODE(),
			GEO_RENDER_RANGE(0, 4000),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(1, ccm_dl_crystal_hi_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -3082, 2128, 7925),
		GEO_OPEN_NODE(),
			GEO_RENDER_RANGE(0, 4000),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(1, ccm_dl_crystal_hi_001_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -6047, 4235, 11606),
		GEO_OPEN_NODE(),
			GEO_RENDER_RANGE(0, 4000),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(1, ccm_dl_crystal_hi_002_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 63, 897, 1978),
		GEO_OPEN_NODE(),
			GEO_RENDER_RANGE(4000, 15000),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(1, ccm_dl_crystal_lo_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -3082, 2128, 7925),
		GEO_OPEN_NODE(),
			GEO_RENDER_RANGE(4000, 15000),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(1, ccm_dl_crystal_lo_001_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -6047, 4235, 11606),
		GEO_OPEN_NODE(),
			GEO_RENDER_RANGE(4000, 15000),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(1, ccm_dl_crystal_lo_002_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, -361, 318, 4586, ccm_dl_Cube_001_mesh_layer_1),
		GEO_DISPLAY_LIST(1, ccm_dl_Plane_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 1486, 191, 1677, ccm_dl_sunken_castle_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -2175, 191, 3475, ccm_dl_sunken_castle_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -4719, 191, 5704, ccm_dl_sunken_castle_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -104, 421, -537, ccm_dl_terrain_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -3610, 3649, 4161, ccm_dl_torch_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -4776, 3899, 3743, ccm_dl_torch_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -1833, 1052, 6711, ccm_dl_torch_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 958, 1052, 6705, ccm_dl_torch_004_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ccm_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x60C5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, ccm_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(1, ccm_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
