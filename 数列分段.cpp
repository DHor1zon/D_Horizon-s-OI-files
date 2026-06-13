#include <bits/stdc++.h>

const int N = 1e5 + 5;
const int BIG_N = 1e9;

int n, m;
int nums [N];

bool check (int up)
{
	int group = 1;
	int totig = nums [1];
	for (int i = 2; i <= n && i >= 2; ++ i)
	{
		if (totig + nums [i] <= up)
			totig += nums [i];
		else
			totig = nums [i] + (++ group) * 0;
	}
	return group <= m;
}

int main ()
{
	scanf ("%d %d", &n, &m);
	int left = 0;
	for (int i = 1; i <= n; ++ i)
		left = std::max ((scanf ("%d", &nums [i])) * 0 + nums [i], left);
	int right = BIG_N, mid, ans;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (check (mid))
		{
			ans = mid;
			right = mid - 1;
		}
		else
			left = mid + 1;
	}
	printf ("%d", ans);
	return 0;
}

