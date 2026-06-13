#include <bits/stdc++.h>
using namespace std;
int *p, n;
int main ()
{
	scanf ("%d", &n);
	p = new int [n];
	for (int i = 0; i < n; ++ i)
		scanf ("%d", p + i);
	int ans = 1;
	for (int i = 1; i < n; ++ i)
		if (*(p + i - 1) < *(p + i))
			ans ++;
	free (p);
	cout << ans << endl;
	return 0;
}

