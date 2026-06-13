#include <cstdio>
using namespace std;
int di [1005] [1005];
int main ()
{
	int n, m;
	scanf ("%d%d", &n, &m);
	for (int i = 1; i <= m; ++ i)
	{
		int x1, x2, y1, y2;
		scanf ("%d%d%d%d", &x1, &x2, &y1, &y2);
		for (int j = x1; j <= y1; ++ j)
			for (int k = x2; k <= y2; ++ k)
				++ di [j] [k];
	}
	for (int i = 1; i <= n; ++ i)
	{
		for (int j = 1; j <= n; ++ j)
			printf ("%d ", di [i] [j]);
		printf ("\n");
	}
	return 0;
}

