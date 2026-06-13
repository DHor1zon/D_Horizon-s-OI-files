#include <bits/stdc++.h>

int wish;

bool check (int a)
{
	int ate = a;
	int wood = a;
	while (wood >= 3)
	{
		ate += wood / 3;
		wood = wood % 3 + wood / 3;
	}
	return ate >= wish;
}

int main ()
{
	scanf ("%d", &wish);
	int left = 1, right = 1e8 + 1, mid;
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

