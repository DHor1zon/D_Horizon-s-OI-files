#include <bits/stdc++.h>

const int MAX_NM = 2 * 1e4 + 67;
const int NM = MAX_NM * 2;
bool kill [NM] [5];
int ans, k;
int n, m;

int main ()
{
	scanf ("%d %d %d", &n, &m, &k);
	for (int i = 1; i <= k; ++ i)
	{
		int x, y;
		scanf ("%d %d", &x, &y);
		kill [x] [1] = true;
		kill [y] [2] = true;
		kill [x + y] [3] = true;
		kill [y - x + MAX_NM] [4] = true;
	}
	for (int i = 1; i <= n; ++ i)
		for (int j = 1; j <= m; ++ j)
		{
			if (kill [i] [1] || kill [j] [2] || kill [i + j] [3] || kill [j - i + MAX_NM] [4])
				continue;
			++ ans;
		}
	printf ("%d", ans);
	return 0;
}

