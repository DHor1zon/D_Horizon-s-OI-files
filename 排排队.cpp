#include <bits/stdc++.h>

int ji [10086], ou [10086];
int n; int j, k;

int main ()
{
	std::cin >> n;
	for (int i = 1; i <= n; ++ i)
	{
		int a; std::cin >> a;
		if (a % 2 == 0)
			ou [++ k] = a;
		else
			ji [++ j] = a;
	}
	for (int i = 1; i <= j; ++ i)
		printf ("%d ", ji [i]);
	printf ("\n");
	for (int i = 1; i <= k; ++ i)
		printf ("%d ", ou [i]);
	return 0;
}
