#include <bits/stdc++.h>

int pow_ [1025] [1025];
int n;

void dfs (int a, int x, int y)
{
	//printf ("dfs in\n");
	if (a == 2)
	{
		pow_ [x] [y] = 1;
		return;
	}
	for (int i = x; i <= x + a / 2 - 1; ++ i)
		for (int j = y; j <= y + a / 2 - 1; ++ j)
			pow_ [i] [j] = 1;
	dfs (a / 2, x + a / 2, y);
	dfs (a / 2, x, y + a / 2);
	dfs (a / 2, x + a / 2, y + a / 2);
}

int main ()
{
	scanf ("%d", &n);
	int right = std::pow (2, n);
	dfs (right, 1, 1);
	for (int i = 1; i <= right; ++ i)
	{
		for (int j = 1; j <= right; ++ j)
			printf ("%d ", 1 - pow_ [i] [j]);
		printf ("\n");
	}
	return 0;
}

