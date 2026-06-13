#include <bits/stdc++.h>
using namespace std;
bool s [10086];
bool xian (int n)
{
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	for (int i = 3; i <= sqrt (n); i += 2)
		if (n % i == 0) return 0;
	return 1;
}
int main ()
{
	int n, ans = 0;
	cin >> n;
	for (int i = 2; i <= n; ++ i)
		if (xian (i))
			++ ans;
	cout << ans;
	return 0;
}

