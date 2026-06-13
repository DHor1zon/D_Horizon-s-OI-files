#include <bits/stdc++.h>

int ans [1086] [1086];
int n, m;
bool vis [1086] [1086];
char map [1086] [1086];
int dx [] = {0, 1, 0, -1};
int dy [] = {1, 0, -1, 0};

struct lnk
{
	int x;
	int y;
};

void bfs (int x, int y)
{
	std::queue <lnk> q;
	q.push ({x, y});
	std::vector <lnk> blocks;
	vis [x] [y] = 1;
	int block = 1;
	while (!q.empty ())
	{
		lnk now = q.front ();
		q.pop ();
		blocks.push_back (now);
		for (int i = 0; i < 4; ++ i)
		{
			int nx = now.x + dx [i];
			int ny = now.y + dy [i];
			if (vis [nx] [ny] || map [nx] [ny] == map [now.x] [now.y] || nx > n||ny > n||nx < 1||ny < 1)
				continue;
			q.push ({nx, ny});
			vis [nx] [ny] = 1;
			++ block;
		}
	}
	for (int i = 0; i < blocks.size (); ++ i)
		ans [blocks [i].x] [blocks [i].y] = block;
}

int main ()
{
	std::cin >> n >> m;
	for (int i = 1; i <= n; ++ i)
		for (int j = 1; j <= n; ++ j)
			std::cin >> map [i] [j];
	for (int i = 1; i <= m; ++ i)
	{
		int x, y;
		scanf ("%d %d", &x, &y);
		//printf ("|%d %d|\n", x, y);
		if (!vis [x] [y])
			bfs (x, y);
		printf ("%d\n", ans [x] [y]);
	}
	return 0;
}

