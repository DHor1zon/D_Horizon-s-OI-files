#include <bits/stdc++.h>

long long ina, inb, p, ans;

long long pow (long long a, long long b)
{
	if (b == 1) return a % p;
	else if (p == 0) return 1;
	if (b % 2)
		return a * pow (a * a % p, (b - 1) / 2) % p;
	else
		return pow (a * a % p, b / 2) % p;
}

int main ()
{
	std::cin >> ina >> inb >> p;
	ans = pow (ina, inb)%p;
	printf ("%lld^%lld mod %lld=%lld", ina, inb, p, ans);
	return 0;
}

