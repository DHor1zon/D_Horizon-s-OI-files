#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n, le;
	cin >> n;
	if (n == 1) cout << 1;
	le = 1;
	for (int i = 1; i < n; ++ i)
	{
		le ++;
		le *= 2;
	}
	cout << le;
	return 0;
}

