#include <bits/stdc++.h>
using namespace std;
int n, a [10086];
int f (int n)
{
	if (n == 1 || n == 2) return 1;
	if (a [n] != -1) return a [n];
	else return a [n] = ((f (n - 1) + f (n - 2)) % 9997);
}
int main ()
{
	cin >> n;
	for (int i = 1; i <= n; ++ i)
		a [i] = -1;
	cout << f (n);
	return 0;
}

