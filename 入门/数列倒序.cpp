#include <bits/stdc++.h>

int n; int nums [105];
int main ()
{
	std::cin >> n;
	for (int i = 1; i <= n; ++ i)
		std::cin >> nums [i];
	for (int i = n; i >= 1; -- i)
		std::cout << nums [i] << ' ';
	return 0;
}

