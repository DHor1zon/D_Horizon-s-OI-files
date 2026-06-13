#include <bits/stdc++.h>

const int N = 1e6 + 6;

long long cows [N];
long long n, d;
long long ans;

int main ()
{
	scanf ("%lld %lld", &n, &d);
	for (int i = 1; i <= n; ++ i)
		scanf ("%lld", &cows [i]);
	std::sort (cows + 1, cows + n + 1);
	for (int i = 1; i <= n; ++ i)
		ans += std::upper_bound (cows + i, cows + n + 1, cows [i] + d) - cows - i - 1;
	printf ("%lld", ans);
	return 0;
}

