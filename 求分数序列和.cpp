#include <bits/stdc++.h>

int p [35], q [35];
double ans = 0;

int main ()
{
	int n; scanf ("%d", &n);
	p [1] = 1; q [1] = 2;
	for (int i = 1; i <= n; ++ i)
	{
		q [i + 1] = q [i] + p [i];
		p [i + 1] = q [i];
	}
	for (int i = 1; i <= n; ++ i)
		ans += (q [i] / (p [i] * 1.0));
	printf ("%.4lf", ans);
	return 0;
}

