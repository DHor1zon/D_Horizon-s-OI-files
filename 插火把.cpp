#include <cstdio>
using namespace std;
int map [1002] [1002], m, k, n, ans;
int abs (int a)
{
	if (a < 0)
		return -1 * a;
	else return a;
}
bool fafa (int x, int y)
{
	if (x < 1 || y < 1 || x > n || y > n)
		return 0;
	return 1;
}
int main ()
{
	scanf ("%d%d%d", &n, &m, &k);
	for (int i = 1; i <= m + k; ++ i)
	{
		int x, y; scanf ("%d%d", &x, &y);
		for (int a = -2; a <= 2; ++ a)
			for (int b = -2; b <= 2; ++ b)
				if ((i > m || abs (a) + abs (b) <= 2) && fafa (x + a, y + b))
					map [x + a] [y + b] = 1;
	}
	for (int i = 1; i <= n; ++ i)
		for (int j = 1; j <= n; ++ j)
			if (!map [i] [j])
				++ ans;
	printf ("%d", ans);
	return 0;
}

