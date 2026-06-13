#include <bits/stdc++.h>

int nums [21]; int n, k;
int a [21]; int hash [21];
int ans;

bool is_prime (int a)
{
	if (a == 1)
		return 0;
	if (a == 2)
		return 1;
	if (a % 2 == 0)
		return 0;
	for (int i = 3; i <= std::sqrt (a); i += 2)
		if (a % i == 0)
			return 0;
	return 1;
}

void dfs (int total, int s, int db)
{
	if (s == k)
	{
		if (is_prime (total))
			++ ans, std::cout << total << ' ';
		return;
	}
	for (int i = db; i <= n - k + s + 1; ++ i)
			dfs (total + nums [i], s + 1, i + 1);
}

int main ()
{
	std::cin >> n >> k;
	for (int i = 1; i <= n; ++ i)
		std::cin >> nums [i];
	dfs (0, 0, 1);
	std::cout << std::endl << ans;
	return 0;
}

