#include <bits/stdc++.h>

const long long MAX = 1e18;

long long n, a, b;
long long pfn [10086]; long long pfm [10086]; long long ans = MAX; long long goal;

void dfs (long long now, long long step)
{
	if (now < 1 || now > n)
		return;
	if (step >= ans)
		return;
	if (step >= pfm [now])
		return;
	if (now == goal)
	{
		ans = step;
		return;
	}
		
	pfm [now] = step;
	dfs (now + pfn [now], step + 1);
	dfs (now - pfn [now], step + 1);
}

int main ()
{
	std::ios::sync_with_stdio (0);
	std::cin.tie (0);
	std::cout.tie (0);
	
	std::cin >> n >> a >> b;
	goal = b;
	for (int i = 1; i <= n; ++ i)
		pfm [i] = MAX;
	for (int i = 1; i <= n; ++ i)
		std::cin >> pfn [i];
	dfs (a, 0);
	//std::cout << ans;
	if (ans != MAX)
		std::cout << ans;
	else
		std::cout << "-1";
	return 0;
}

