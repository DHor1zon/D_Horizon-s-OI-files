#include <bits/stdc++.h>
using namespace std;
int m, n, ans;
int main ()
{
	scanf ("%d%d", &m, &n);
	if (m > n) swap (m, n);
	if (m <= 1) m = 2;
	for (int i = m, k = 1; i <= n; ++ i)
	{
		bool flag = 1;
		for (int j = 2; j <= sqrt (i); ++ j)
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		if (flag)
		{
			ans += i;
			printf ("%3d ", i);
			if (k == 3)
			{
				printf ("\n");
				k = 0;
			}
			++ k;
		}
	}
	if (ans)
		printf ("\n%3d", ans);
	else
		printf ("Empty!");
	return 0;
}

