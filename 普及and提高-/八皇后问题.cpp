#include <bits/stdc++.h>

int map [15] [15];
int n;
int ans [15];
int nus;
int dx [] = {1, 1, 1, 0, -1, -1, -1, 0};
int dy [] = {1, 0, -1, -1, -1, 0, 1, 1};

void print ()
{
	for (int i = 1; i <= n; ++ i)
		std::printf ("%d ", ans [i]);
	std::printf ("\n");
}

void cleaner (int x, int y, int type)
{
	for (int i = 1; i < n; ++ i)
		for (int j = 0; j < 4; ++ j)
		{
			int nx = x + dx [i] * i;
			int ny = y + dy [i] * i;
			if (nx <= n && ny <= n && nx >= 1 && ny >= 1)
				map [nx] [ny] = type;
		}
}

void dfs (int s)
{
	if (s > n)
	{
		print ();
		++ nus;
	}
	for (int i = 1; i <= n; ++ i)
	{
		if (!map [i] [s])
		{
			cleaner (i, s, 1);
			map [i] [s] = 2;
			ans [s] = i;
			dfs (s + 1);
			cleaner (i, s, 0);
			map [i] [s] = 0;
		}
	}
}

int main ()
{
	std::cin >> n;
	dfs (1);
	std::cout << uns;
	return 0;
}

