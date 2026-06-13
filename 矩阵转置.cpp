#include <bits/stdc++.h>

int map [105] [105]; int ans [105] [105];
int n, m;

int main ()
{
	std::cin >> n >> m;
	for (int i = 1; i <= n; ++ i)
		for (int j = 1; j <= m; ++ j)
			std::cin >> map [i] [j];
	for (int i = 1; i <= n; ++ i)
		for (int j = 1; j <= m; ++ j)
			ans [j] [i] = map [i] [j];
	for (int i = 1; i <= m; ++ i)
	{
		for (int j = 1; j <= n; ++ j)
			std::cout << ans [i] [j] << ' ';
		std::cout << std::endl;
	}
	return 0;
}

