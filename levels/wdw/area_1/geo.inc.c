#include "src/game/envfx_snow.h"

const GeoLayout wdw_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(7, geo_switch_area),
		GEO_OPEN_NODE(),
			GEO_BRANCH(1, wdw_dl_B_Overworld_geo),
			GEO_BRANCH(1, wdw_dl_C_Giant_Tree_Terrace_geo),
			GEO_BRANCH(1, wdw_dl_D_Giant_Tree_Interior_geo),
			GEO_BRANCH(1, wdw_dl_E_Giant_Tree_Exterior_geo),
			GEO_BRANCH(1, wdw_dl_F_Alley_geo),
			GEO_BRANCH(1, wdw_dl_G_Pink_Hill_geo),
		GEO_CLOSE_NODE(),
		GEO_ASM(0, geo_backdrop_move),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_FORCE, 0, 1076, 0, wdw_backdrop_Skybox_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wdw_dl_B_Overworld_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1091, 1674, 4354, 90, 0, 0, wdw_dl_Group_of_Logs__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Group_of_Logs__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1231, 1597, -1608, 90, 0, 0, wdw_dl_Maple__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Maple__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Maple__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1231, 1597, -1608, 90, 0, 0, wdw_dl_Pond__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Pond__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Pond__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5071, 1217, 4385, 90, 0, 0, wdw_dl_Start_Area__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Start_Area__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Start_Area__Visual__mesh_layer_5),
			GEO_DISPLAY_LIST(LAYER_ALPHA, wdw_dl_Start_Area__Visual__mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 6203, 644, -5699, 90, 0, 0, wdw_dl_Giant_Tree_Terrace__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Giant_Tree_Terrace__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Giant_Tree_Terrace__Visual__mesh_layer_5),
			GEO_DISPLAY_LIST(LAYER_ALPHA, wdw_dl_Giant_Tree_Terrace__Visual__mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2660, 4101, -5359, 90, 0, 0, wdw_dl_Giant_Tree_Exterior__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Giant_Tree_Exterior__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -4323, 2791, -3797, 90, 0, 0, wdw_dl_Pink_Hill__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Pink_Hill__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Pink_Hill__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1059, 2043, -5265, 90, 0, 0, wdw_dl_Alley__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Alley__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Alley__Visual__mesh_layer_5),
			GEO_DISPLAY_LIST(LAYER_ALPHA, wdw_dl_Alley__Visual__mesh_layer_4),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wdw_dl_C_Giant_Tree_Terrace_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1231, 1597, -1608, 90, 0, 0, wdw_dl_Maple__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Maple__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Maple__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -4323, 2791, -3797, 90, 0, 0, wdw_dl_Pink_Hill__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Pink_Hill__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Pink_Hill__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1091, 1674, 4354, 90, 0, 0, wdw_dl_Group_of_Logs__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Group_of_Logs__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5071, 1217, 4385, 90, 0, 0, wdw_dl_Start_Area__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Start_Area__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Start_Area__Visual__mesh_layer_5),
			GEO_DISPLAY_LIST(LAYER_ALPHA, wdw_dl_Start_Area__Visual__mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1231, 1597, -1608, 90, 0, 0, wdw_dl_Pond__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Pond__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Pond__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 6203, 644, -5699, 90, 0, 0, wdw_dl_Giant_Tree_Terrace__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Giant_Tree_Terrace__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Giant_Tree_Terrace__Visual__mesh_layer_5),
			GEO_DISPLAY_LIST(LAYER_ALPHA, wdw_dl_Giant_Tree_Terrace__Visual__mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2660, 4101, -5359, 90, 0, 0, wdw_dl_Giant_Tree_Exterior__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Giant_Tree_Exterior__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2635, 2220, -4928, 90, 0, 0, wdw_dl_Giant_Tree_Interior__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, wdw_dl_Giant_Tree_Interior__Visual__mesh_layer_4),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wdw_dl_D_Giant_Tree_Interior_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 6203, 644, -5699, 90, 0, 0, wdw_dl_Giant_Tree_Terrace__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Giant_Tree_Terrace__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Giant_Tree_Terrace__Visual__mesh_layer_5),
			GEO_DISPLAY_LIST(LAYER_ALPHA, wdw_dl_Giant_Tree_Terrace__Visual__mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2635, 2220, -4928, 90, 0, 0, wdw_dl_Giant_Tree_Interior__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, wdw_dl_Giant_Tree_Interior__Visual__mesh_layer_4),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wdw_dl_E_Giant_Tree_Exterior_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1059, 2043, -5265, 90, 0, 0, wdw_dl_Alley__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Alley__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Alley__Visual__mesh_layer_5),
			GEO_DISPLAY_LIST(LAYER_ALPHA, wdw_dl_Alley__Visual__mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 6203, 644, -5699, 90, 0, 0, wdw_dl_Giant_Tree_Terrace__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Giant_Tree_Terrace__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Giant_Tree_Terrace__Visual__mesh_layer_5),
			GEO_DISPLAY_LIST(LAYER_ALPHA, wdw_dl_Giant_Tree_Terrace__Visual__mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1231, 1597, -1608, 90, 0, 0, wdw_dl_Maple__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Maple__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Maple__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -4323, 2791, -3797, 90, 0, 0, wdw_dl_Pink_Hill__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Pink_Hill__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Pink_Hill__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1231, 1597, -1608, 90, 0, 0, wdw_dl_Pond__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Pond__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Pond__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1091, 1674, 4354, 90, 0, 0, wdw_dl_Group_of_Logs__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Group_of_Logs__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5071, 1217, 4385, 90, 0, 0, wdw_dl_Start_Area__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Start_Area__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Start_Area__Visual__mesh_layer_5),
			GEO_DISPLAY_LIST(LAYER_ALPHA, wdw_dl_Start_Area__Visual__mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2660, 4101, -5359, 90, 0, 0, wdw_dl_Giant_Tree_Exterior__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Giant_Tree_Exterior__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wdw_dl_F_Alley_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2660, 4101, -5359, 90, 0, 0, wdw_dl_Giant_Tree_Exterior__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Giant_Tree_Exterior__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1231, 1597, -1608, 90, 0, 0, wdw_dl_Maple__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Maple__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Maple__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1091, 1674, 4354, 90, 0, 0, wdw_dl_Group_of_Logs__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Group_of_Logs__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1231, 1597, -1608, 90, 0, 0, wdw_dl_Pond__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Pond__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Pond__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1059, 2043, -5265, 90, 0, 0, wdw_dl_Alley__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Alley__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Alley__Visual__mesh_layer_5),
			GEO_DISPLAY_LIST(LAYER_ALPHA, wdw_dl_Alley__Visual__mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -4323, 2791, -3797, 90, 0, 0, wdw_dl_Pink_Hill__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Pink_Hill__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Pink_Hill__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wdw_dl_G_Pink_Hill_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1059, 2043, -5265, 90, 0, 0, wdw_dl_Alley__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Alley__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Alley__Visual__mesh_layer_5),
			GEO_DISPLAY_LIST(LAYER_ALPHA, wdw_dl_Alley__Visual__mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2660, 4101, -5359, 90, 0, 0, wdw_dl_Giant_Tree_Exterior__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Giant_Tree_Exterior__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1231, 1597, -1608, 90, 0, 0, wdw_dl_Maple__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Maple__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Maple__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1231, 1597, -1608, 90, 0, 0, wdw_dl_Pond__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Pond__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Pond__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5071, 1217, 4385, 90, 0, 0, wdw_dl_Start_Area__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Start_Area__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Start_Area__Visual__mesh_layer_5),
			GEO_DISPLAY_LIST(LAYER_ALPHA, wdw_dl_Start_Area__Visual__mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1091, 1674, 4354, 90, 0, 0, wdw_dl_Group_of_Logs__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Group_of_Logs__Visual__mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -4323, 2791, -3797, 90, 0, 0, wdw_dl_Pink_Hill__Visual__mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_Pink_Hill__Visual__mesh_layer_6),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Pink_Hill__Visual__mesh_layer_5),
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
		GEO_DISPLAY_LIST(LAYER_FORCE, wdw_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wdw_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, wdw_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, wdw_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
