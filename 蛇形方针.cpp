#include <bits/stdc++.h>

int map [10] [10]; int num = 1; int n;
int main ()
{
	std::cin >> n;
	int x = n, y = n + 1;
	while (num <= n * n)
	{
		while (!map [x] [y - 1] && y > 1)
			map [x] [-- y] = num ++;
		while (!map [x - 1] [y] && x > 1)
			map [-- x] [y] = num ++;
		while (!map [x] [y + 1] && y < n)
			map [x] [++ y] = num ++;
		while (!map [x + 1] [y] && x < n)
			map [++ x] [y] = num ++;
	}
	for (int i = 1; i <= n; ++ i)
	{
		for (int j = 1; j <= n; ++ j)
			printf ("%3d", map [i] [j]);
		printf ("\n");
	}
	return 0;
}

