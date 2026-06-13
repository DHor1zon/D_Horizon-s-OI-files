#include <bits/stdc++.h>

int map [33] [33];
int n;
int dx [] = {0, 1, 0, -1};
int dy [] = {1, 0, -1, 0};

void print ()
{
	for (int i = 1; i <= n; ++ i)
	{
		for (int j = 1; j <= n; ++ j)
			std::printf ("%d ", 2 - map [i] [j]);
		std::printf ("\n");
	}
}

void dfs (int x, int y)
{
	map [x] [y] = 2;
	for (int i = 0; i < 4; ++ i)
	{
		int nx = x + dx [i];
		int ny = y + dy [i];
		if (map [nx] [ny] == 0 && nx <= n + 1 && ny <= n + 1 && nx >= 0 && ny >= 0)
			dfs (nx, ny);
	}
}

int main ()
{
	std::cin >> n;
	for (int i = 1; i <= n; ++ i)
		for (int j = 1; j <= n; ++ j)
			std::cin >> map [i] [j];
	dfs (0, 0);
	print ();
	return 0;
}

