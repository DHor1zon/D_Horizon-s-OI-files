#include <bits/stdc++.h>

const int N = 1e5 + 5;
int n, traps [N];

bool check (int a)
{
	int health = a;
	for (int i = 1; i <= n; ++ i)
	{
		health += traps [i];
		if (health <= 0)
			return 0;
	}
	return 1;
}

int main ()
{
	scanf ("%d", &n);
	for (int i = 1; i <= n; ++ i)
		scanf ("%d", &traps [i]);
	int left = 1, right = N * 1e3, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (check (mid))
			right = mid - 1;
		else
			left = mid + 1;
	}
	printf ("%d", left);
	return 0;
}

