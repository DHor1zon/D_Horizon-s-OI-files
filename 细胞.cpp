#include <bits/stdc++.h>

char map [101] [101];
//bool hash [101] [101];
int n, m;
int dx [] = {1, 0, -1, 0};
int dy [] = {0, 1, 0, -1};
int ans;

void paint ()
{
	for (int i = 1; i <= n; ++ i)
	{
		for (int j = 1; j <= m; ++ j)
			std::printf ("%c", map [i] [j]);
		std::printf ("\n");
	}
	std::printf ("\n");
}

void dfs (int x, int y)
{
	map [x] [y] = '0';
	//paint ();
	for (int i = 0; i < 4; ++ i)
	{
		int nx = x + dx [i];
		int ny = y + dy [i];
		if (map [nx] [ny] != '0' && nx <= n && ny <= m && nx >= 1 && ny >= 1)
			dfs (nx, ny);
	}
}

int main ()
{
	std::cin >> n >> m;
	for (int i = 1; i <= n; ++ i)
		for (int j = 1; j <= m; ++ j)
			std::cin >> map [i] [j];
	//std::cout << std::endl;
	//paint ();
	for (int i = 1; i <= n; ++ i)
		for (int j = 1; j <= m; ++ j)
			if (map [i] [j] != '0')
			{
				dfs (i, j);
				++ ans;
				//std::cout << "New cell found!" << std::endl;
			}
	std::cout << ans;
	return 0;
}

