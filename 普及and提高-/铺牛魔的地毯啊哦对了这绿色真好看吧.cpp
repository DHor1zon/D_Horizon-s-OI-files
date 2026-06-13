#include <bits/stdc++.h>

void dfs (int px, int py, int sx, int sy, int lth) //princess' x,y; the Left-Up x,y ; the length
{
	if (lth == 1) return;
	int hl = lth / 2;   //half-length              r---?
	bool lr = (py - sy) >= hl; //0-left, 1-right   |1 2|
	bool ud = (px - sx) >= hl; //0-up,   1-down    |3 4|
							  //                   <- ->
	if (lr == 0 && ud == 0)
	{
		printf ("%d %d 1\n", hl + sx, hl + sy);
		dfs (px, py, sx, sy, hl);
		dfs (hl + sx - 1, hl + sy, sx, sy + hl, hl);
		dfs (hl + sx, hl + sy - 1, sx + hl, sy, hl);
		dfs (hl + sx, hl + sy, hl + sx, hl + sy, hl);
	}
	else if (lr == 1 && ud == 0)
	{
		printf ("%d %d 2\n", hl + sx, hl + sy - 1);
		dfs (hl + sx - 1, hl + sy - 1, sx, sy, hl);
		dfs (px, py, sx, hl + sy, hl);
		dfs (hl + sx, hl + sy - 1, hl + sx, sy, hl);
		dfs (hl + sx, hl + sy, hl + sx, hl + sy, hl);
	}
	else if (lr == 0 && ud == 1)
	{
		printf ("%d %d 3\n", hl + sx - 1, hl + sy);
		dfs (hl + sx - 1, hl + sy - 1, sx, sy, hl);
		dfs (hl + sx - 1, hl + sy, sx, hl + sy, hl);
		dfs (px, py, hl + sx, sy, hl);
		dfs (hl + sx, hl + sy, hl + sx, hl + sy, hl);
	}
	else if (lr == 1 && ud == 1)
	{
		printf ("%d %d 4\n", hl + sx - 1, hl + sy - 1);
		dfs (hl + sx - 1, hl + sy - 1, sx, sy, hl);
		dfs (hl + sx - 1, hl + sy, sx, hl + sy, hl);
		dfs (hl + sx, hl + sy - 1, hl + sx, sy, hl);
		dfs (px, py, hl + sx, hl + sy, hl);
	}
}

int main ()
{
	int l, px, py;
	scanf ("%d %d %d", &l, &px, &py);
	//printf ("%d %d %d", l, px, py);
	dfs (px, py, 1, 1, std::pow (2, l));
	return 0;
}
