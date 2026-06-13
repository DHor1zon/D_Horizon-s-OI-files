#include <bits/stdc++.h>

double cs [386]; int n;
double max, balance, all;

int main ()
{
	std::cin >> n;
	for (int i = 1; i <= n; ++ i)
		std::cin >> cs [i];
	std::sort (cs + 1, cs + n + 1);
	for (int i = 2; i < n; ++ i)
		all += cs [i];
	balance = all / ((n - 2) * 1.0);
	for (int i = 2; i < n; ++ i)
		max = std::max (max, std::abs (cs [i] - balance));
	printf ("%.2lf %.2lf", balance, max);
	return 0;
}

