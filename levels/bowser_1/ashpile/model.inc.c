Lights1 ashpile_emuAsh_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx emu_ashpile_ash_ci4_aligner[] = {gsSPEndDisplayList()};
u8 emu_ashpile_ash_ci4[] = {
	0x01, 0x23, 0x00, 0x04, 0x02, 0x20, 0x05, 0x55, 
	0x04, 0x50, 0x62, 0x26, 0x26, 0x20, 0x22, 0x62, 
	0x01, 0x22, 0x00, 0x04, 0x40, 0x00, 0x44, 0x44, 
	0x44, 0x00, 0x62, 0x22, 0x42, 0x20, 0x04, 0x22, 
	0x22, 0x20, 0x44, 0x40, 0x00, 0x00, 0x44, 0x45, 
	0x44, 0x05, 0x62, 0x22, 0x22, 0x00, 0x00, 0x06, 
	0x22, 0x00, 0x60, 0x16, 0x04, 0x66, 0x00, 0x44, 
	0x40, 0x05, 0x25, 0x52, 0x00, 0x02, 0x26, 0x02, 
	0x55, 0x54, 0x00, 0x42, 0x44, 0x54, 0x22, 0x04, 
	0x45, 0x54, 0x42, 0x06, 0x55, 0x52, 0x45, 0x44, 
	0x55, 0x54, 0x02, 0x26, 0x44, 0x44, 0x22, 0x04, 
	0x44, 0x40, 0x00, 0x26, 0x66, 0x52, 0x40, 0x44, 
	0x44, 0x44, 0x02, 0x02, 0x00, 0x44, 0x20, 0x62, 
	0x44, 0x04, 0x40, 0x40, 0x65, 0x52, 0x00, 0x44, 
	0x44, 0x44, 0x04, 0x44, 0x50, 0x40, 0x22, 0x24, 
	0x44, 0x44, 0x04, 0x00, 0x62, 0x22, 0x50, 0x00, 
	0x04, 0x00, 0x04, 0x44, 0x64, 0x66, 0x26, 0x02, 
	0x41, 0x41, 0x40, 0x04, 0x40, 0x00, 0x04, 0x40, 
	0x04, 0x55, 0x54, 0x44, 0x64, 0x00, 0x22, 0x40, 
	0x01, 0x11, 0x06, 0x00, 0x40, 0x24, 0x44, 0x05, 
	0x40, 0x50, 0x44, 0x44, 0x41, 0x40, 0x22, 0x20, 
	0x60, 0x40, 0x01, 0x10, 0x22, 0x04, 0x40, 0x40, 
	0x05, 0x44, 0x40, 0x50, 0x04, 0x11, 0x44, 0x24, 
	0x00, 0x41, 0x41, 0x40, 0x26, 0x00, 0x44, 0x45, 
	0x55, 0x40, 0x00, 0x40, 0x50, 0x44, 0x54, 0x40, 
	0x44, 0x01, 0x14, 0x55, 0x26, 0x62, 0x44, 0x50, 
	0x40, 0x00, 0x40, 0x02, 0x04, 0x44, 0x05, 0x04, 
	0x00, 0x44, 0x44, 0x75, 0x62, 0x62, 0x40, 0x50, 
	0x40, 0x04, 0x22, 0x06, 0x44, 0x54, 0x44, 0x04, 
	0x06, 0x66, 0x55, 0x54, 0x06, 0x60, 0x40, 0x44, 
	0x40, 0x00, 0x00, 0x00, 0x05, 0x00, 0x44, 0x45, 
	0x66, 0x06, 0x55, 0x44, 0x42, 0x40, 0x00, 0x44, 
	0x00, 0x44, 0x41, 0x40, 0x00, 0x00, 0x01, 0x14, 
	0x44, 0x00, 0x44, 0x06, 0x04, 0x00, 0x00, 0x40, 
	0x04, 0x44, 0x41, 0x40, 0x20, 0x24, 0x40, 0x11, 
	0x10, 0x04, 0x11, 0x66, 0x20, 0x40, 0x00, 0x40, 
	0x04, 0x04, 0x14, 0x40, 0x04, 0x44, 0x00, 0x10, 
	0x44, 0x04, 0x10, 0x66, 0x62, 0x04, 0x44, 0x40, 
	0x04, 0x40, 0x11, 0x44, 0x40, 0x02, 0x04, 0x14, 
	0x01, 0x44, 0x06, 0x06, 0x66, 0x20, 0x00, 0x44, 
	0x44, 0x44, 0x14, 0x44, 0x04, 0x45, 0x54, 0x44, 
	0x44, 0x04, 0x02, 0x22, 0x33, 0x22, 0x00, 0x40, 
	0x04, 0x44, 0x14, 0x44, 0x44, 0x40, 0x44, 0x44, 
	0x44, 0x44, 0x20, 0x02, 0x02, 0x22, 0x04, 0x40, 
	0x44, 0x04, 0x44, 0x41, 0x44, 0x40, 0x44, 0x40, 
	0x44, 0x40, 0x42, 0x22, 0x00, 0x00, 0x04, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x40, 0x44, 0x44, 0x44, 
	0x41, 0x14, 0x02, 0x02, 0x30, 0x10, 0x44, 0x44, 
	0x44, 0x00, 0x11, 0x44, 0x40, 0x00, 0x44, 0x44, 
	0x44, 0x44, 0x40, 0x04, 0x54, 0x04, 0x44, 0x44, 
	0x44, 0x50, 0x00, 0x04, 0x40, 0x06, 0x54, 0x44, 
	0x05, 0x50, 0x44, 0x00, 0x44, 0x44, 0x44, 0x44, 
	0x44, 0x44, 0x00, 0x04, 0x02, 0x02, 0x04, 0x44, 
	0x04, 0x44, 0x05, 0x04, 0x44, 0x45, 0x44, 0x40, 
	0x44, 0x44, 0x00, 0x40, 0x22, 0x62, 0x54, 0x44, 
	0x40, 0x44, 0x45, 0x04, 0x44, 0x05, 0x40, 0x50, 
	0x44, 0x44, 0x44, 0x05, 0x00, 0x54, 0x02, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x40, 
	0x44, 0x44, 0x44, 0x44, 0x05, 0x54, 0x40, 0x24, 
	0x40, 0x04, 0x40, 0x00, 0x00, 0x00, 0x20, 0x06, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x05, 0x00, 0x20, 
	0x45, 0x04, 0x44, 0x06, 0x20, 0x44, 0x20, 0x02, 
	0x04, 0x05, 0x44, 0x54, 0x44, 0x40, 0x20, 0x22, 
	0x55, 0x50, 0x00, 0x06, 0x60, 0x02, 0x62, 0x02, 
	
};

Gfx emu_ashpile_ash_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 emu_ashpile_ash_ci4_pal_rgba16[] = {
	0x29, 0x49, 0x21, 0x07, 0x29, 0x4b, 0x39, 0xcf, 
	0x21, 0x09, 0x31, 0x8b, 0x39, 0xcd, 0x42, 0x0f, 
	
};

Vtx emu_ashpile_Cylinder_002_mesh_layer_5_vtx_0[47] = {
	{{{0, 20, -108},0, {-16, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{0, 83, -45},0, {1008, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{43, 83, -14},0, {1008, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{102, 20, -33},0, {-16, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{102, 20, -33},0, {-16, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{43, 83, -14},0, {1008, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{26, 83, 36},0, {1008, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{63, 20, 87},0, {-16, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{63, 20, 87},0, {-16, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{26, 83, 36},0, {1008, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-26, 83, 36},0, {1008, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-63, 20, 87},0, {-16, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{26, 83, 36},0, {9, 338},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{43, 83, -14},0, {496, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{0, 83, -45},0, {983, 338},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-26, 83, 36},0, {195, 910},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{0, 83, -45},0, {983, 338},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-43, 83, -14},0, {797, 910},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-26, 83, 36},0, {195, 910},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-63, 20, 87},0, {-16, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-26, 83, 36},0, {1008, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-43, 83, -14},0, {1008, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-102, 20, -33},0, {-16, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-102, 20, -33},0, {-16, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-43, 83, -14},0, {1008, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{0, 83, -45},0, {1008, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{0, 20, -108},0, {-16, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-151, 0, -49},0, {-16, 1008},{0xFF, 0xFF, 0xFF, 0x4}}},
	{{{-102, 20, -33},0, {1008, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{0, 20, -108},0, {1008, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{0, 0, -159},0, {-16, -16},{0xFF, 0xFF, 0xFF, 0x0}}},
	{{{-93, 0, 128},0, {-16, 1008},{0xFF, 0xFF, 0xFF, 0xF}}},
	{{{-63, 20, 87},0, {1008, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-102, 20, -33},0, {1008, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-151, 0, -49},0, {-16, -16},{0xFF, 0xFF, 0xFF, 0x4}}},
	{{{93, 0, 128},0, {-16, 1008},{0xFF, 0xFF, 0xFF, 0x1D}}},
	{{{63, 20, 87},0, {1008, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-63, 20, 87},0, {1008, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-93, 0, 128},0, {-16, -16},{0xFF, 0xFF, 0xFF, 0xF}}},
	{{{151, 0, -49},0, {-16, 1008},{0xFF, 0xFF, 0xFF, 0x0}}},
	{{{102, 20, -33},0, {1008, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{63, 20, 87},0, {1008, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{93, 0, 128},0, {-16, -16},{0xFF, 0xFF, 0xFF, 0x1D}}},
	{{{0, 0, -159},0, {-16, 1008},{0xFF, 0xFF, 0xFF, 0x0}}},
	{{{0, 20, -108},0, {1008, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{102, 20, -33},0, {1008, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{151, 0, -49},0, {-16, -16},{0xFF, 0xFF, 0xFF, 0x0}}},
};

Gfx emu_ashpile_Cylinder_002_mesh_layer_5_tri_0[] = {
	gsSPVertex(emu_ashpile_Cylinder_002_mesh_layer_5_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(14, 15, 12, 0),
	gsSPVertex(emu_ashpile_Cylinder_002_mesh_layer_5_vtx_0 + 16, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(7, 9, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSPVertex(emu_ashpile_Cylinder_002_mesh_layer_5_vtx_0 + 31, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPEndDisplayList(),
};


Gfx mat_ashpile_emuAsh[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, SHADE, 0),
	gsSPClearGeometryMode(G_LIGHTING),
	gsDPSetAlphaCompare(G_AC_DITHER),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, emu_ashpile_ash_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 7),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, emu_ashpile_ash_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 255, 1024),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(ashpile_emuAsh_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_ashpile_emuAsh[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx emu_ashpile_Cylinder_002_mesh_layer_5[] = {
	gsSPDisplayList(mat_ashpile_emuAsh),
	gsSPDisplayList(emu_ashpile_Cylinder_002_mesh_layer_5_tri_0),
	gsSPDisplayList(mat_revert_ashpile_emuAsh),
	gsSPEndDisplayList(),
};

Gfx emu_ashpile_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

