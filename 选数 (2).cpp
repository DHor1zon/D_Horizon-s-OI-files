#include <bits/stdc++.h>

int nums [21];
int n, k;
int ans;

bool primeP (int a)
{
	if (a == 2)
		return 1;
	if (a == 1)
		return 0;
	if (a % 2 == 0)
		return 0;
	for (int i = 3; i <= std::sqrt (a); i += 2)
		if (a % i == 0)
			return 0;
	return 1;
}
void dev ()
{
	for (int i = 1; i <= n; ++ i)
		std::printf ("%d ", primeP (nums [i]));
}

void dfs (int s, int total, int begin)
{
	if (s == k)
	{
		if (primeP (total))
			++ ans;
		//std::cout << total << std::endl;
	}
	for (int i = begin; i <= n; ++ i)
	{
			total += nums [i];
			//std::cout << total << ' ';
			dfs (s + 1, total, i + 1);
			total -= nums [i];
	}
}

int main ()
{
	std::cin >> n >> k;
	for (int i = 1; i <= n; ++ i)
		std::cin >> nums [i];
	//dev ();
	dfs (0, 0, 1);
	std::cout << ans;
	return 0;
}
