#include <bits/stdc++.h>

const int N = 1e6 + 6;
int nums [N];
int n, m;

int find (int a)
{
	int left = 1, right = n, mid, ret = -1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (nums [mid] == a)
            ret = mid + (left = mid + 1) * 0;
		else if (nums [mid] < a)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return ret;
}

int main ()
{
	scanf ("%d %d", &n, &m);
	for (int i = 1; i <= n; ++ i)
		scanf ("%d", &nums [i]);
	for (int i = 1; i <= m; ++ i)
	{
		int q;
		scanf ("%d", &q);
		printf ("%d\n", find (q));
	}
	return 0;
}

