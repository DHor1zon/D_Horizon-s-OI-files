#include <bits/stdc++.h>

void swap (int *m, int *n)
{
	std::swap (*m, *n);
	return;
}
int main ()
{
	int n; std::cin >> n;
	int *a; int *p = NULL;
	a = new int [n + 5];
	for (p = a; p < a + n; ++ p)
		scanf ("%d", p);
	for (int i = 1; i <= n; ++ i)
	{
		bool flag = 1;
		for (p = a; p < a + n - 1; ++ p)
			if (*p > * (p + 1))
			{
				flag = 0;
				swap (p, p + 1);
			}
		if (flag) break;
	}
	for (p = a; p < a + n; ++ p)
		printf ("%d ", *p);
	return 0;
}

