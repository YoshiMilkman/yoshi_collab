const Collision water_plane1_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(25),
	COL_VERTEX(565, 0, -1272),
	COL_VERTEX(1520, 0, -1272),
	COL_VERTEX(1520, 0, -2543),
	COL_VERTEX(565, 0, -2543),
	COL_VERTEX(-2300, 0, -1272),
	COL_VERTEX(-1345, 0, -1272),
	COL_VERTEX(-1345, 0, -2543),
	COL_VERTEX(-2300, 0, -2543),
	COL_VERTEX(-390, 0, -1272),
	COL_VERTEX(-390, 0, -2543),
	COL_VERTEX(-2300, 0, 2543),
	COL_VERTEX(-1345, 0, 2543),
	COL_VERTEX(-1345, 0, 1272),
	COL_VERTEX(-2300, 0, 1272),
	COL_VERTEX(-1345, 0, 0),
	COL_VERTEX(-2300, 0, 0),
	COL_VERTEX(-390, 0, 2543),
	COL_VERTEX(-390, 0, 1272),
	COL_VERTEX(-390, 0, 0),
	COL_VERTEX(565, 0, 2543),
	COL_VERTEX(565, 0, 1272),
	COL_VERTEX(565, 0, 0),
	COL_VERTEX(1520, 0, 2543),
	COL_VERTEX(1520, 0, 1272),
	COL_VERTEX(1520, 0, 0),
	COL_TRI_INIT(SURFACE_NEW_WATER, 32),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(4, 5, 6),
	COL_TRI(4, 6, 7),
	COL_TRI(5, 8, 9),
	COL_TRI(5, 9, 6),
	COL_TRI(8, 0, 3),
	COL_TRI(8, 3, 9),
	COL_TRI(10, 11, 12),
	COL_TRI(10, 12, 13),
	COL_TRI(13, 12, 14),
	COL_TRI(13, 14, 15),
	COL_TRI(15, 14, 5),
	COL_TRI(15, 5, 4),
	COL_TRI(11, 16, 17),
	COL_TRI(11, 17, 12),
	COL_TRI(12, 17, 18),
	COL_TRI(12, 18, 14),
	COL_TRI(14, 18, 8),
	COL_TRI(14, 8, 5),
	COL_TRI(16, 19, 20),
	COL_TRI(16, 20, 17),
	COL_TRI(17, 20, 21),
	COL_TRI(17, 21, 18),
	COL_TRI(18, 21, 0),
	COL_TRI(18, 0, 8),
	COL_TRI(19, 22, 23),
	COL_TRI(19, 23, 20),
	COL_TRI(20, 23, 24),
	COL_TRI(20, 24, 21),
	COL_TRI(21, 24, 1),
	COL_TRI(21, 1, 0),
	COL_TRI_STOP(),
	COL_END()
};