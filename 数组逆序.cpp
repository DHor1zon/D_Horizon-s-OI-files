#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int a [102], *p, n;
	cin >> n;
	for (int i = 0; i < n; ++ i) 
			cin >> a [i];
	for (*p = &a [n - 1]; p >= &a [0]; -- p) 
			cout << *p << ' ';
	return 0;
}

