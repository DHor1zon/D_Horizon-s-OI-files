#include <bits/stdc++.h>
using namespace std;
int num [101];
bool check (int a)
{
	if (a < 2) return false;
	if (a == 2) return true;
	if (a % 2 == 0) return false;
	for (int i = 2; i <= sqrt (a); ++ i)
		if (a % i == 0)
			return false;
	return true;
}
int main ()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++ i)
		cin >> num [i];
	for (int i = 1; i <= n; ++ i)
		if (check (num [i])) printf ("%d ", num [i]);
	return 0;
}

