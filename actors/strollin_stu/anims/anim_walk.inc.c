static const s16 strollin_stu_anim_walk_values[] = {
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFC71, 
	0xFC8B, 0xFCD6, 0xFD48, 0xFDD9, 0xFE83, 0xFF3D, 0xFFFF, 0x00C2, 0x017C, 
	0x0226, 0x02B7, 0x0329, 0x0374, 0x038E, 0x0377, 0x0336, 0x02D1, 0x024F, 
	0x01B6, 0x010E, 0x005B, 0xFFA4, 0xFEF1, 0xFE49, 0xFDB0, 0xFD2E, 0xFCC9, 
	0xFC88, 0xFC71, 0x0000, 0x0000, 0x0000, 0xFFCA, 0xFF37, 0xFE54, 0xFD32, 
	0xFBDF, 0xFA6C, 0xF8EA, 0xF767, 0xF5F4, 0xF4A2, 0xF37F, 0xF29D, 0xF209, 
	0xF1D5, 0xF203, 0xF284, 0xF34C, 0xF44F, 0xF57F, 0xF6D0, 0xF834, 0xF99F, 
	0xFB04, 0xFC54, 0xFD85, 0xFE87, 0xFF50, 0xFFD1, 0x0000, 0x0000, 0x0000, 
	0xFFFF, 0xFFFF, 0xFFFE, 0xFFFD, 0xFFFA, 0xFFF6, 0xFFF1, 0xFFEB, 0xFFE3, 
	0xFFDC, 0xFFD4, 0xFFCE, 0xFFCA, 0xFFC8, 0xFFCA, 0xFFCD, 0xFFD3, 0xFFDA, 
	0xFFE1, 0xFFE8, 0xFFEE, 0xFFF4, 0xFFF8, 0xFFFB, 0xFFFD, 0xFFFE, 0xFFFF, 
	0xFFFF, 0x0000, 0x0000, 0x0000, 0xFFFA, 0xFFED, 0xFFDA, 0xFFC0, 0xFFA3, 
	0xFF83, 0xFF61, 0xFF40, 0xFF20, 0xFF04, 0xFEEB, 0xFED9, 0xFECC, 0xFEC8, 
	0xFECC, 0xFED7, 0xFEE7, 0xFEFD, 0xFF16, 0xFF33, 0xFF52, 0xFF71, 0xFF90, 
	0xFFAD, 0xFFC8, 0xFFDE, 0xFFF0, 0xFFFB, 0x0000, 0x0000, 0xF1D5, 0xF209, 
	0xF29D, 0xF37F, 0xF4A2, 0xF5F4, 0xF767, 0xF8EA, 0xFA6C, 0xFBDF, 0xFD32, 
	0xFE54, 0xFF37, 0xFFCA, 0x0000, 0xFFD1, 0xFF50, 0xFE87, 0xFD85, 0xFC54, 
	0xFB04, 0xF99F, 0xF834, 0xF6D0, 0xF57F, 0xF44F, 0xF34C, 0xF284, 0xF203, 
	0xF1D5, 0x0000, 0x0037, 0x0035, 0x0031, 0x002B, 0x0023, 0x001C, 0x0014, 
	0x000E, 0x0009, 0x0005, 0x0002, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0001, 0x0002, 0x0004, 0x0007, 0x000B, 0x0011, 0x0017, 0x001E, 
	0x0025, 0x002C, 0x0032, 0x0035, 0x0037, 0x0000, 0x0137, 0x0133, 0x0126, 
	0x0114, 0x00FB, 0x00DF, 0x00BF, 0x009E, 0x007C, 0x005C, 0x003F, 0x0025, 
	0x0012, 0x0005, 0x0000, 0x0004, 0x000F, 0x0021, 0x0037, 0x0052, 0x006F, 
	0x008E, 0x00AD, 0x00CC, 0x00E9, 0x0102, 0x0118, 0x0128, 0x0133, 0x0137, 
	
};

static const u16 strollin_stu_anim_walk_indices[] = {
	0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0002, 0x0001, 0x0003, 0x0001, 
	0x0004, 0x0001, 0x0005, 0x0001, 0x0006, 0x001F, 0x0007, 0x0001, 0x0026, 
	0x001F, 0x0027, 0x001F, 0x0046, 0x001F, 0x0065, 0x001F, 0x0084, 0x001F, 
	0x00A3, 0x001F, 0x00C2, 
};

static const struct Animation strollin_stu_anim_walk = {
	0,
	0,
	0,
	1,
	30,
	ANIMINDEX_NUMPARTS(strollin_stu_anim_walk_indices),
	strollin_stu_anim_walk_values,
	strollin_stu_anim_walk_indices,
	0,
};
