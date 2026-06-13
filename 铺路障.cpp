#include <bits/stdc++.h>

int l, n, k;
const int N = 1e5 + 5;
int road [N];

bool check (int x)
{
	int total = 0;
	int now = road [1];
	for (int i = 2; i <= n; ++ i)
	{
		if (total > k)
			break;
		if (road [i] - now <= x)
			now = road [i];
		else
		{
			++ total;
			now += x;
			-- i;
		}
	}
	return total <= k;
}

int main ()
{
	std::cin >> l >> n >> k;
	for (int i = 1; i <= n; ++ i)
		scanf ("%d", &road [i]);
	int left = 0, right = l, mid, ans;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (check (mid))
		{
			right = mid - 1;
			ans = mid;
		}
		else
			left = mid + 1;
	}
	printf ("%d", ans);
	return 0;
}
