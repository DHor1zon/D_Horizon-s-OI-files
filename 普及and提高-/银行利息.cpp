#include <bits/stdc++.h>

double w0, w, m;

bool check (double ans)
{
	return std::pow ((1 / (1 + ans)), m) >= 1 - w0 / w * ans;
}

signed main ()
{
	std::cin >> w0 >> w >> m;
	double left = 0, right = 10, mid;
	while (right - left >= 0.0001)
	{
		mid = (left + right) / 2.0;
		//printf ("%.2lf ", mid);
		if (check (mid))
			right = mid;
		else
			left = mid;
	}
	printf ("%.1lf", left * 100);
	return 0;
}

