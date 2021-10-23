#include "src/game/envfx_snow.h"

const GeoLayout rainbow_chain_geo[] = {
	GEO_CULLING_RADIUS(3000),
	GEO_OPEN_NODE(),
		GEO_ROTATION_NODE(LAYER_OPAQUE, 0, 0, 0),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, rainbow_chain_000_displaylist_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, rainbow_chain_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
