#include <bits/stdc++.h>

int main ()
{
	int n; scanf ("%d", &n);
	int *a = new int [n + 5];
	int *ans = new int [n + 5];
	int *p, *q;
	for (p = a, q = ans; p < a + n; ++ p)
		scanf ("%d", p);
	for (p = a, q = ans; p < a + n; ++ p)
		if ((*p) * (*p) % 7 != 1)
			*q ++ = *p;
	for (p = ans; p < q; ++ p)
		printf ("%d ", *p);
	return 0;
}

