#include <bits/stdc++.h>
using namespace std;
long long f (long long n)
{
	if (n == 1) return 1;
	else return (f (n - 1) + 1) * 2;
}
int main ()
{
	long long n;
	cin >> n;
	cout << f (n);
	return 0;
}

