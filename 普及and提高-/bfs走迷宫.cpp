#include <bits/stdc++.h>

struct lnk
{
	int x;
	int y;
	int step;
};

int dx [] = {0, 1, 0, -1};
int dy [] = {1, 0, -1, 0};

std::queue <lnk> q;
bool vis [51] [51];

int n, m, sx, sy, fx, fy;

int bfs ()
{
	lnk tmp;
	tmp.x = sx; tmp.y = sy; tmp.step = 0;
	vis [sx] [sy] = 1;
	q.push (tmp);
	while (!q.empty ())
	{
		lnk b = q.front ();
		q.pop ();
		if (b.x == fx && b.y == fy)
			return b.step;
		for (int i = 0; i < 4; ++ i)
		{
			lnk a;
			a.x = b.x + dx [i];
			a.y = b.y + dy [i];
			a.step = b.step + 1;
			
			if (!vis [a.x] [a.y] && a.x >= 1 && a.y >= 1 && a.x <= n && a.y <= m)
			{
				q.push (a);
				vis [a.x] [a.y] = 1;
			}
		}
	}
}

int main ()
{
	std::cin >> n >> m >> sx >> sy >> fx >> fy;
	for (int i = 1; i <= n; ++ i)
		for (int j = 1; j <= m; ++ j)
		{
			char c;
			std::cin >> c;
			if (c == '#')
				vis [i] [j] = 1;
		}
	std::cout << bfs ();
	return 0;
}

