#include <bits/stdc++.h>

int n, m; bool map [6] [6]; 
int t, sx, sy, fx, fy; int ans;
bool hash [6] [6];
int dx [] = {-1, 1, 0, 0};
int dy [] = {0, 0, -1, 1};

bool pan (int x, int y)
{
	return x >= 1 && y >= 1 && x <= n && y <= m && !map [x] [y] && !hash [x] [y];
}

void dfs (int x, int y)
{
	if (x == fx && y == fy)
	{
		++ ans;
		return;
	}
	for (int i = 0; i < 4; ++ i)
	{
		int nx = x + dx [i];
		int ny = y + dy [i];
		if (pan (nx, ny))
		{
			hash [nx] [ny] = 1;
			dfs (nx, ny);
			hash [nx] [ny] = 0;
		}
	}
}

int main ()
{
	std::cin >> n >> m >> t;
	std::cin >> sx >> sy >> fx >> fy;
	for (int i = 1; i <= t; ++ i)
	{
		int tx, ty; std::cin >> tx >> ty;
		map [tx] [ty] = 1;
	}
	hash [sx] [sy] = 1;
	dfs (sx, sy);
	std::cout << ans;
	return 0;
}
