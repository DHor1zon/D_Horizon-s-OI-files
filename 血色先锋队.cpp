#include <bits/stdc++.h>

struct lnk
{
	int x;
	int y;
	int step;
};

std::queue <lnk> q;
bool vis [505] [505];
int ans [505] [505];
int boss [100005] [3];
int dx [] = {0, 1, 0, -1};
int dy [] = {1, 0, -1, 0};
int n, m, a, b;

void join (int x, int y)
{
	lnk t = {x, y, 0};
	q.push (t);
	vis [x] [y] = 1;
	ans [x] [y] = 0;
}

void bfs ()
{
	while (!q.empty ())
	{
		lnk now = q.front ();
		q.pop ();
		for (int i = 0; i < 4; ++ i)
		{
			int nx = now.x + dx [i];
			int ny = now.y + dy [i];
			if (!vis [nx] [ny] && nx <= n && ny <= m && nx >= 1 && ny >= 1)
			{
				vis [nx] [ny] = 1;
				lnk in = {nx, ny, now.step + 1};
				q.push (in);
				ans [nx] [ny] = now.step + 1;
			}
		}
	}
}

int main ()
{
	
	
	std::cin >> n >> m >> a >> b;
	for (int i = 1; i <= a; ++ i)
	{
		int x, y;
		scanf ("%d%d", &x, &y);
		join (x, y);
	}
	for (int i = 1; i <= b; ++ i)
	{
		int x, y;
		scanf ("%d%d", &x, &y);
		boss [i] [1] = x; boss [i] [2] = y;
	}
	bfs ();
	for (int i = 1; i <= b; ++ i)
		printf ("%d\n", ans [boss [i] [1]] [boss [i] [2]]);
	return 0;
}

