#include <bits/stdc++.h>

int cows [100086];
int n, m;
int left, right, mid;

bool check (int x)
{
	int cnt = 1;
	int rest = cows [1] + x; //rest
	for (int i = 2; i <= n; ++ i)
		if (rest <= cows [i])
		{
			rest = cows [i] + x;
			++ cnt;
		}
	return cnt >= m;
}

int main ()
{
	std::cin >> n >> m;
	for (int i = 1; i <= n; ++ i)
		scanf ("%d", &cows [i]);
	std::sort (cows + 1, cows + 1 + n);
	left = 0; right = cows [n] - cows [1];
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (check (mid))
			left = mid + 1;
		else
			right = mid - 1;
	}
	std::cout << right;
	return 0;
}

