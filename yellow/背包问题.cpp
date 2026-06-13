#include <bits/stdc++.h>

int w [1005]; int bag [1005];
int n, s;
bool flag;

void dfs (int step, int now, int things)
{
	if (now == s)
	{
		for (int i = 1; i <= things; ++ i)
			std::cout << bag [i] << ' ';
		flag = 1;
		exit (0);
	}
	if (now > s)
		return;
	if (step > n)
		return;
	
	bag [things + 1] = w [step];
	dfs (step + 1, now + w [step], things + 1);
	dfs (step + 1, now, things);
}

int main ()
{
	std::cin >> n >> s;
	for (int i = 1; i <= n; ++ i)
		std::cin >> w [i];
	dfs (1, 0, 0);
	if (!flag)
		std::cout << "No Answer!";
	return 0;
}

