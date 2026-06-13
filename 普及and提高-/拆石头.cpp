#include <bits/stdc++.h>

const int N = 5 * 1e5 + 5;

int l, n, m;
int stones [N];

bool check (int met)
{
	int sto = 0;
	int now = 0;
	for (int i = 0; i <= n;)
	{
		++ i;
		if (stones [i] - stones [now] < met)
			++ sto;
		else
			now = i;
	}
	return sto <= m;
}

int main ()
{
	scanf ("%d %d %d", &l, &n, &m);
	for (int i = 1; i <= n; ++ i)
		scanf ("%d", &stones [i]);
	stones [n + 1] = l;
	int left = 1, right = l, mid, ans;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (check (mid))
		{
			ans = mid;
			left = mid + 1;
		}
		else
			right = mid - 1;
	}
	printf ("%d", ans);
	return 0;
}

