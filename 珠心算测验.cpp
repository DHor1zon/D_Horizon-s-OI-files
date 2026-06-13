#include <bits/stdc++.h>
using namespace std;
int sums [10086], ans, n;
bool findC (int num)
{
	for (int i = 1; i <= n; ++ i)
	{
		int all;
		for (int j = i + 1; j <= n; ++ j)
		{
			all = sums [i] + sums [j];
			if (all == sums [num])
				return 1;
		}
	}
	return 0;
}
int main ()
{
	scanf ("%d", &n);
	for (int i = 1; i <= n; ++ i)
		scanf ("%d", &sums [i]);
	for (int i = 1; i <= n; ++ i)
		if (findC (i)) ++ ans;
	printf ("%d", ans);
	return 0;
}

