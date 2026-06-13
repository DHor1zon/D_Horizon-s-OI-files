#include <bits/stdc++.h>

const int N = 1e5 * 2 + 5;
int nums [N];
int n, c;
long long ans;

signed main ()
{
	std::cin >> n >> c;
	for (int i = 1; i <= n; ++ i)
		scanf ("%d", &nums [i]);
	std::sort (nums + 1, nums + 1 + n);
	for (int i = 1; i <= n; ++ i)
		ans += (std::upper_bound (nums + 1, nums + n + 1, nums [i] + c) - nums) - (std::lower_bound (nums + 1, nums + n + 1, nums [i] + c) - nums);
	std::cout << ans;
	return 0;
}
