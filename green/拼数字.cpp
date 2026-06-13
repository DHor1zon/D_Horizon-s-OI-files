#include <bits/stdc++.h>

std::string s [30];
std::string ans;

bool cmp (std::string x, std::string y)
{
	return x + y > y + x;
}

int main ()
{
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; ++ i)
		std::cin >> s [i];
	std::sort (s + 1, s + 1 + n, cmp);
	for (int i = 1; i <= n; ++ i)
		ans += s [i];
	std::cout << ans;
	return 0;
}

