#include <bits/stdc++.h>

void dfs (int px, int py, int sx, int sy, int lth) //princess' x,y; the Left-Up x,y ; the length
{
	if (lth == 1) return;
	int hl = lth / 2; //half-length             r---?
	bool lr = px - sx < hl; //0-left, 1-right   |1 2|
	bool ud = py - sy < hl; //0-up,   1-down    |3 4|
	if (lr == 0 && ud == 0)//                   <- ->
	{
		printf ("%d %d 1\n", hl + sx, hl + sy);
		dfs (px, py, sx, sy, hl);
		dfs (hl + sx - 1, hl + sy, sx, sy + hl, hl);
		dfs (hl + sx, hl + sy - 1, sx + hl, sy, hl);
		dfs (hl + sx, hl + sy, hl + x, hl + sy, hl);
	}
	else if (lr == 1 && ud == 0)
	{
		printf ("%d %d 2\n", )
	}
}

int main ()
{
	return 0;
}
