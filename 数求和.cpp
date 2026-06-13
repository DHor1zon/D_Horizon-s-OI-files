#include <bits/stdc++.h>
int nums [21]; int n, k; bool hash [21]; int a [21]; int cnt;
bool prime (int a)
{
	if (a == 2)
		return 1;
	if (a % 2 == 0)
		return 0;
	for (int i = 3; i <= std::sqrt (a); i += 2)
		if (a % i == 0)
			return 0;
	return 1;
}
void alll ()
{
	int all = 0;
	for (int i = 1; i <= k; ++ i)
		all += a [i];
	std::cout << all << std::endl;
	if (prime (all))
		++ cnt;
}
void dfs (int s)
{
	if (s == k)
	{
		for (int i = 1; i <= k; ++ i)
			std::printf ("%d ", a [i]);
		printf ("\n");
		alll ();
		return;
	}
	for (int i = 1; i <= n; ++ i)
		if (!hash [i])
		{
			hash [i] = 1;
			a [i] = nums [i];
			dfs (s + 1);
			hash [i] = 0;
		}
}
int main ()
{
	std::cin >> n >> k;
	for (int i = 1; i <= n; ++ i)
		std::cin >> nums [i];
	dfs (0);
	std::cout << cnt;
	return 0;
}

