#include <bits/stdc++.h>
using namespace std;
int a [101], n, *p;
int main ()
{
	cin >> n;
	for (p = a; p - a < n; ++ p)
		scanf ("%d", p);
	for (p = &a [1]; p < &a [n - 1]; ++ p)
		if (*(p - 1) < *p && *(p + 1) < *p)
			printf ("%d ", *p);
	return 0;
}

