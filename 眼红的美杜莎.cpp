#include <bits/stdc++.h>

const int N = 1e5 + 5;
int n, m;
int tech [N];
int spec [N];

bool find (int a)
{
	int left = 1, right = m, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (spec [mid] == a)
			return 1;
		else if (spec [mid] < a)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return 0;
}

int main ()
{
	scanf ("%d %d", &n, &m);
	for (int i = 1; i <= n; ++ i)
		scanf ("%d", &tech [i]);
	for (int i = 1; i <= m; ++ i)
		scanf ("%d", &spec [i]);
	std::sort (spec + 1, spec + m + 1);
	for (int i = 1; i <= n; ++ i)
		if (find (tech [i]))
			printf ("%d ", tech [i]);
	return 0;
}

