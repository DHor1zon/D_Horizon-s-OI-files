#include <bits/stdc++.h>

struct lnk
{
	int x;
	int y;
	int step;
};

std::queue <lnk> q;
int n, m;
int map [401] [401];
int dx [] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy [] = {2, 1, -1, -2, -2, -1, 1, 2};

void bfs (int x, int y, int step)
{
	lnk st = {x, y, step};
	q.push (st);
	map [x] [y] = 0;
	while (!q.empty ())
	{
		lnk now = q.front ();
		q.pop ();
		for (int i = 0; i < 8; ++ i)
		{
			int nx = now.x + dx [i];
			int ny = now.y + dy [i];
			if (map [nx] [ny] == -1 && nx >= 1 && ny >= 1 && nx <= n && ny <= m)
			{
				map [nx] [ny] = now.step + 1;
				lnk in = {nx, ny, now.step + 1};
				q.push (in);
			}
		}
	}
}

int main ()
{
	std::ios::sync_with_stdio (0);
	std::cin.tie (0);
	std::cout.tie (0);
	int x, y;
	std::cin >> n >> m >> x >> y;
	memset (map, -1, sizeof (map));
	bfs (x, y, 0);
	for (int i = 1; i <= n; ++ i)
	{
		for (int j = 1; j <= m; ++ j)
			printf ("%d ", map [i] [j]);
		printf ("\n");
	}
	return 0;
}
