#include <bits/stdc++.h>

struct lnk
{
	int x;
	int y;
	int dir;
	int step;
};

bool vis [55] [55] [5];
bool map [55] [55];
int sx, sy, fx, fy, stDir; char firDicC;
std::string dire = "NESW";
int dx [] = {0, 1, 0, -1};
int dy [] = {1, 0, -1, 0};
int n, m;

int bfs ()
{
	std::queue <lnk> q;
	q.push ({sx, sy, stDir, 0});
	vis [sx] [sy] [stDir] = 1;
	
	while (!q.empty ())
	{
		lnk tmp = q.front ();
		q.pop ();
		if (tmp.x == fx && tmp.y == fy)
			return tmp.step + 1;
			
		int nx = tmp.x;
		int ny = tmp.y;
		
		for (int i = 1; i <= 3; ++ i)
		{
			nx += i * dx [tmp.dir];
			ny += i * dy [tmp.dir];
			int ndir = tmp.dir;
			if (nx < 1 || ny < 1 || nx >= n || ny >= m || map [nx] [ny])
				break;
			vis [nx] [ny] [ndir] = 1;
			q.push ({nx, ny, ndir, tmp.step + 1});
		}
		
		nx = tmp.x;
		ny = tmp.y;
		
		//turnLeft:
		int ndir = ((tmp.dir - 1) < 0 ? 3 : tmp.dir - 1);
		if (!vis [nx] [ny] [ndir])
		{
			vis [nx] [ny] [ndir] = 1;
			q.push ({nx, ny, ndir, tmp.step + 1});
		}
		
		//turnRight:
		ndir = ((tmp.dir + 1) > 3 ? 0 : tmp.dir + 1);
		if (!vis [nx] [ny] [ndir])
		{
			vis [nx] [ny] [ndir] = 1;
			q.push ({nx, ny, ndir, tmp.step + 1});
		}
	}
	return -1;
}

int main ()
{
	std::cin >> n >> m;
	
	for (int i = 1; i <= n; ++ i)
		for (int j = 1; j <= m; ++ j)
		{
			int type;
			scanf ("%d", &type);
			if (type == 1)
				map [i] [j] = map [i - 1] [j - 1] = map [i] [j - 1] = map [i - 1] [j] = 1;
		}
	
	scanf ("%d%d%d%d %c", &sx, &sy, &fx, &fy, &firDicC);
	stDir = dire.find (firDicC);
	if (sx < 1 || sy < 1 || sx >= n || sy >= m || map [sx] [sy])
		return 0 * printf ("-1");
	if (fx < 1 || fy < 1 || fx >= n || fy >= m || map [fx] [fy])
		return 0 * printf ("-1");
	if (fx == sx && fy == sy)
		return 0 * printf ("0");
	
	printf ("%d", bfs ());
	return 0;
}
