#include <bits/stdc++.h>

const int N = 1e5 + 5;
double n, p;
double a [N];
double b [N];
double total;

bool check (double x)
{
	double all = 0;
	for (int i = 1; i <= n; ++ i)
		if (a [i] * x > b [i])
			all += a [i] * x - b [i];
			
	return all <= x * p;
}

int main ()
{
	scanf ("%lf %lf", &n, &p);
	for (int i = 1; i <= n; ++ i)
		total += scanf ("%lf %lf", &a [i], &b [i]) * 0 + a [i];
	if (total <= p)
		return 0 * printf ("-1");
	double left = 0, right = 1e10, mid, ans;
	while (right - left > 1e-6)
	{
		mid = (left + right) / 2;
		if (check (mid))
			left = mid + (ans = mid) * 0;
		else
			right = mid;
	}
	std::cout << ans;
	return 0;
}

