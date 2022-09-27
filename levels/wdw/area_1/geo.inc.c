#include "src/game/envfx_snow.h"

const GeoLayout wdw_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, wdw_dl_flowers_mesh_layer_4),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 90, 0, 0, wdw_dl_Maple_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Maple_mesh_layer_5),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wdw_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 45000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, wdw_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_PETALS, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wdw_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, wdw_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
