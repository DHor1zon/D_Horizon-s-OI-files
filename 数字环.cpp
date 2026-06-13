#include <bits/stdc++.h>
using namespace std;
int ma [15] [15], x = 1, y = 0;
int main ()
{
	int n, i = 1; scanf ("%d", &n);
	while (i <= pow (n, 2))
	{
		while (ma [x] [y + 1] == 0 && y < n) ma [x] [++ y] = i ++;
		while (ma [x + 1] [y] == 0 && x < n) ma [++ x] [y] = i ++;
		while (ma [x] [y - 1] == 0 && y > 1) ma [x] [-- y] = i ++;
		while (ma [x - 1] [y] == 0 && x > 1) ma [-- x] [y] = i ++;
	}
	for (int i = 1; i <= n; ++ i)
	{
		for (int j = 1; j <= n; ++ j)
			printf ("%3d", ma [i] [j]);
		printf ("\n");
	}////²»Òª¼à¿ØÎÒ°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡°¡ 
	return 0;
}

