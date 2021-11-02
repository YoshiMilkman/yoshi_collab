void scroll_sts_mat_lll_dl_water_001_layer5() {
	Gfx *mat = segmented_to_virtual(mat_lll_dl_water_001_layer5);
	shift_t(mat, 13, PACK_TILESIZE(0, 1));
	shift_s(mat, 21, PACK_TILESIZE(0, 1));
	shift_t(mat, 21, PACK_TILESIZE(0, 2));
};

void scroll_sts_mat_lll_dl_slow_mud() {
	static int intervalTex0 = 5;
	static int curInterval0 = 5;
	static int intervalTex1 = 5;
	static int curInterval1 = 5;
	Gfx *mat = segmented_to_virtual(mat_lll_dl_slow_mud);

	if (--curInterval0 <= 0) {
		shift_s(mat, 11, PACK_TILESIZE(0, 1));
		curInterval0 = intervalTex0;
	}

	if (--curInterval1 <= 0) {
		shift_s(mat, -1, PACK_TILESIZE(0, 1));
		curInterval1 = intervalTex1;
	}
};

void scroll_lll() {
	scroll_sts_mat_lll_dl_water_001_layer5();
	scroll_sts_mat_lll_dl_slow_mud();
}
