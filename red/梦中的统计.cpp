#include <bits/stdc++.h>
using namespace std;
int m, n, cunt [11];
void findC (int a, int fn)
{
	int tmp;
	while (a)
	{
		tmp = a % 10;
		if (tmp == fn) cunt [fn] ++;
		a /= 10;
	}
}
int main ()
{
	cin >> m >> n;
	for (int i = m; i <= n; ++ i)
	{
		for (int j = 0; j < 10; ++ j)
			findC (i, j);
	}
	for (int i = 0; i < 10; ++ i)
		printf ("%d ", cunt [i]);
	return 0;
}

