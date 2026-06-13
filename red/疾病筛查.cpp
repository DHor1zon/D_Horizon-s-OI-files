#include <bits/stdc++.h>

int n;
int nums [5];
double ans [5];

int main ()
{
	std::cin >> n;
	for (int i = 1; i <= n; ++ i)
	{
		int tmp; std::cin >> tmp;
		if (tmp >= 61)
			++ nums [4];
		else if (tmp >= 36)
			++ nums [3];
		else if (tmp >= 19)
			++ nums [2];
		else if (tmp >= 0)
			++ nums [1];
	}
	for (int i = 1; i <= 4; ++ i)
		ans [i] = nums [i] / (n * 1.0);
	for (int i = 1; i <= 4; ++ i)
		printf ("%.2lf%\n", ans [i] * 100);
	return 0;
}

