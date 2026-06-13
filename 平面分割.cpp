#include <bits/stdc++.h>
using namespace std;
long long f (long long n)
{
	//cout << n << ' ';
	if (n == 1) return 2;
	else return f (n - 1) + 2 * (n - 1);
}
int main ()
{
	long long n;
	cin >> n;
	cout << f (n);
	return 0;
}

