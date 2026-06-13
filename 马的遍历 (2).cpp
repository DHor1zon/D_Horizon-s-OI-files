#include <bits/stdc++.h>

bool vis [401] [401];
int dx [] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy [] = {2, 1, -1, -2, -2, -1, 1, 2};

struct lnk
{
	int x;
	int y;
	int step;
};

std::queue <lnk> q;
int n, m, x, y;

int bfs (int fx, int fy, int step)
{
	lnk fir;
	fir.x = x; fir.y = y; fir.step = step;
	q.push (fir);
	vis [x] [y] = 0;
	while (!q.empty ())
	{
		lnk tmp = q.front ();
		q.pop ();
		if (tmp.x == fx && tmp.y == fy)
			return tmp.step;
		for (int i = 0; i < 8; ++ i)
		{
			lnk a;
			a.x = tmp.x + dx [i];
			a.y = tmp.y + dy [i];
			a.step = tmp.step + 1;
			
			if (vis [a.x] [a.y] && a.x <= n && a.y <= m && a.x >= 1 && a.y >= 1)
			{
				q.push (a);
				vis [a.x] [a.y] = 0;
			}
		}
	}
	return -1;
}

int main ()
{
	std::cin >> n >> m >> x >> y;
	for (int i = 1; i <= n; ++ i)
	{
		for (int j = 1; j <= m; ++ j)
		{
			memset (vis, 1, sizeof (vis));
			while (!q.empty ())
				q.pop ();
			std::cout << bfs (i, j, 0) << ' ';
		}
		std::cout << std::endl;
	}
	return 0;
}

