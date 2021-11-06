const Collision floor_door_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(6),
	COL_VERTEX(198, 0, 114),
	COL_VERTEX(198, 0, -114),
	COL_VERTEX(0, 0, -228),
	COL_VERTEX(-198, 0, -114),
	COL_VERTEX(-198, 0, 114),
	COL_VERTEX(0, 0, 228),
	COL_TRI_INIT(SURFACE_DEFAULT, 4),
	COL_TRI(0, 1, 2),
	COL_TRI(2, 3, 4),
	COL_TRI(4, 5, 0),
	COL_TRI(2, 4, 0),
	COL_TRI_STOP(),
	COL_END()
};
