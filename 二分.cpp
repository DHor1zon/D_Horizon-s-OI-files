#include <bits/stdc++.h>

int nums [1000086];
int n, m;
int left, right, mid;

int main ()
{
	std::cin >> n >> m;
	for (int i = 1; i <= n; ++ i)
		std::cin >> nums [i];
	for (int i = 1; i <= m; ++ i)
	{
		int find;
		scanf ("%d", &find);
		left = 1; right = n;
		int ans = 0;
		while (left <= right)
		{
			mid = (left + right) / 2;
			if (nums [mid] > find)
				right = mid - 1;
			if (nums [mid] <= find)
				left = mid + 1 + (ans = mid) * 0;
		}
		printf ("%d ", nums [ans] == find ? ans : -1);
	}
	return 0;
}
