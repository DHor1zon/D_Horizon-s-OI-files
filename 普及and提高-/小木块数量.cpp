#include <bits/stdc++.h>
#define ll long long

ll mery [10086];
ll merry [10086];

ll otf (ll n)
{
	if (n == 1)
		return 1;
	return mery [n] = (mery [n] ? mery [n] : mery [n] = otf (n  - 1) + n);
}

ll all (ll n)
{
	if (n == 1)
		return 1;
	return merry [n] = (merry [n] ? merry [n] : all (n - 1) + otf (n));
}

int main ()
{
	ll n;
	std::cin >> n;
	std::cout << all (n);
	return 0;
}
