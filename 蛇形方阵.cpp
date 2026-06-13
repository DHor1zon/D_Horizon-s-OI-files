#include <bits/stdc++.h>

int getXY (int i, int j, int n)
{
	if (i == 1)
		return j;
	if (j == n)
		return n + i - 1;
	if (i == n)
		return 3 * n - 1 - j;
	if (j == 1)
		return 4 * n - 2 - i;
	return getXY (i - 1, j - 1, n - 2) + 4 * (n - 1);
}

int main ()
{
	int n, ix, iy;
	std::cin >> n >> ix >> iy;
	std::cout << getXY (ix, iy, n);
	return 0;
}

