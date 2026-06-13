#include <bits/stdc++.h>
using namespace std;
long long digit (long long n, long long k)
{
	long long a;
	for (int i = 1; i <= k; ++ i)
	{
		a = n % 10;
		n /= 10;
	}
	return a;
}
int main ()
{
	long long n, k;
	cin >> n >> k;
	cout << digit (n, k);
	return 0;
}

