#include <bits/stdc++.h>

void sl (int x, int y, int tx, int ty, int l)
{
	if (l == 1) return;
	ll = l / 2;
	if (tx < x + ll && ty < y + ll) //left-up
	{
		printf ("%d %d %d\n", x + ll, y + ll, 1);
		sl (x, y, tx, ty, ll);                     //1 2    1
		sl (x, y + ll, x + ll - 1, y + ll, ll);    //3 4    2
		sl (x + ll, y, x + ll, y + ll - 1, ll);    //       3
		sl (x + ll, y + ll, x + ll, y + ll, ll);   //       4
	}
	else if (tx < x + ll && ty >= y + ll) //right-up
	{
		printf ("%d %d %d\n", x + ll, y + ll - 1, 2);
		sl (x, y, x + ll - 1, y + ll, ll);
		sl (x, y + ll, tx, ty, ll);
		sl (x + ll, y, x + ll, y + ll - 1, ll);
		sl (x + ll, y + ll, x + ll, y + ll, ll);
	}
}

int main ()
{
	int k; int x, y;
	scanf ("%d %d %d", &k, &x, &y);
	//printf ("%d %d %d", k, x, y);
	sl (1, 1, x, y, pow (2, k));
	return 0;
}

