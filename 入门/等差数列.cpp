#include <bits/stdc++.h>
using namespace std;
int nums [100086], n;
int main ()
{
	scanf ("%d", &n);
	for (int i = 1; i <= n; ++ i)
		scanf ("%d", &nums [i]);
	sort (nums + 1, nums + n + 1);
	if (nums [1] == nums [n])
	{
		printf ("%d", n);
		return 0;
	}
	int d = 1000000086;
	int tmpD = nums [2] - nums [1];
	for (int i = 3; i <= n; ++ i)
		tmpD = __gcd (tmpD, nums [i] - nums [i - 1]);
	d = tmpD;
	int a1, an;
	a1 = nums [1]; an = nums [n];
	int aw = (an - a1) / d + 1;
	printf ("%d", aw);
	return 0;
}

