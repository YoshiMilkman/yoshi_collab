#include "src/game/envfx_snow.h"

const GeoLayout toad_cage_3_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, toad_cage_3_geo_Cube_034_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, toad_cage_3_geo_Cube_034_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, toad_cage_3_geo_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, toad_cage_3_geo_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
