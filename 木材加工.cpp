#include <bits/stdc++.h>

const int N = 1e8 + 5;
int n, k;
int l [N];

bool check (int x)
{
	//printf ("[%d", x);
	long long total = 0;
	for (int i = 1; i <= n; ++ i)
		total += l [i] / x;
	//printf ("]");
	return total >= k;
}

int main ()
{
	std::cin >> n >> k;
	for (int i = 1; i <= n; ++ i)
		scanf ("%d", &l [i]);
	int left = 1, right = N, mid, ans = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (check (mid))
			left = mid + 1 + (ans = mid) * 0;
		else
			right = mid - 1;
	}
	
	//printf ("...\n");
	
	printf ("%d", ans);
	return 0;
}
