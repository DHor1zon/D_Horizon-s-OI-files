#include <bits/stdc++.h>

const int N = 1e4 + 86;
int map [N] [5]; //* x y x' y'
int asx, asy, n, ans = -1;

void debug ()
{
	for (int i = 1; i <= n; ++ i)
		printf ("%d %d %d %d\n", map [i] [1], map [i] [2], map [i] [3], map [i] [4]);
}

int main ()
{
	std::cin >> n;
	for (int i = 1; i <= n; ++ i)
	{
		int tx, ty;
		scanf ("%d %d %d %d", &map [i] [1], &map [i] [2], &tx, &ty);
		map [i] [3] = map [i] [1] + tx - 1;
		map [i] [4] = map [i] [2] + ty - 1;
	}
	std::cin >> asx >> asy;
	for (int i = 1; i <= n; ++ i)
		if ((asx >= map [i] [1] && asx <= map [i] [3]) && (asy >= map [i] [2] && asy <= map [i] [4]))
			ans = i;
	printf ("%d", ans);
	return 0;
}

