#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int a, b, ans = 0;
	cin >> a;
	for (int i = 1; i <= a; ++ i)
	{
		scanf ("%d", &b);
		ans ^= b;
	}
	cout << ans;
	return 0;
}

