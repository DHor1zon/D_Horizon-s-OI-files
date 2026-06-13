#include <bits/stdc++.h>

const int N = 1e6 + 5;

int n, m;
int trees [N];

bool check (int h)
{
	long long total = 0;
	for (int i = 1; i <= n; ++ i)
		total += h < trees [i] ? trees [i] - h : 0;
	return total >= m;
}

int main ()
{
	//ai, erFen.
	std::cin >> n >> m;
	for (int i = 1; i <= n; ++ i)
		scanf ("%d", &trees [i]);
	int left = 0, right = 4 * 1e5, mid, ans;
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
		//printf ("mid: %d\n", mid);
	}
	std::cout << ans;
	return 0;
}
