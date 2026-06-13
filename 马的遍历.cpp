#include <bits/stdc++.h>

int n, m, x, y;
int ans [401] [401];
std::string tans = "";
bool hash [401] [401];
int fx, fy;

int dx [] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy [] = {2, 1, -1, -2, -2, -1, 1, 2};

bool pan (int x, int y)
{
	return x <= n && y <= m && x >= 1 && y >= 1 && !hash [x] [y];
}

int get_ans ()
{
	if (tans.size () == 0)
		return -1;
	int a [1000];
	for (int i = 0; i < tans.size (); ++ i)
		a [i] = tans [i] - '0';
	std::sort (a, a + tans.size ());
	return a [0];
}

void dfs (int x, int y, int s)
{
	if (x == fx && y == fy)
	{
		tans += s + '0';
		return;
	}
	for (int i = 0; i < 8; ++ i)
	{
		int nx = x + dx [i];
		int ny = y + dy [i];
		if (pan (nx, ny))
		{
			hash [nx] [ny] = 1;
			dfs (nx, ny, s + 1);
			hash [nx] [ny] = 0;
		}
	}
}

int main ()
{
	std::cin >> n >> m >> x >> y;
	for (int i = 1; i <= n; ++ i)
	{
		for (int j = 1; j <= m; ++ j)
		{
			fx = i; fy = j;
			if (fx == x && fy == y)
			{
				std::cout << 0 << std::endl;
				break;
			}
			dfs (x, y, 1);
			std::cout << tans << ' ';
			std::cout << get_ans () << std::endl;
			tans = "";
		}
		std::cout << std::endl;
	}
	return 0;
}

