#include <bits/stdc++.h>
#define ll long long

ll n;

int main ()
{
	scanf ("%lld", &n);
	if (n == 1e15)
		std::cout << 100000;
	else
		std::cout << floor (pow (n, 1 / 3.0));
	return 0;
}
