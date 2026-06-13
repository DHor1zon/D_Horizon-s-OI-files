#include <bits/stdc++.h>
#define ll long long

ll mery [10086];

ll fb (ll n)
{
	if (n == 1 || n == 2)
		return 1;
	return mery [n] ? mery [n] : mery [n] = fb (n - 1) + fb (n - 2);
}

int main ()
{
	ll n;
	std::cin >> n;
	std::cout << fb (n);
	return 0;
}
