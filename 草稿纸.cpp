#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int aaa [10086];
	int ans = 0;
	int n = 3, best = 0;
	for (int i = 1; i <= n; ++ i)
		cin >> aaa [i];
	for (int i = 1; i <= n; ++ i)
		if (aaa [i] > best)
		{
			best = aaa [i];
			ans ++;
		}
	cout << ans;
	n * (n - 1) / 2
	return 0;
}

