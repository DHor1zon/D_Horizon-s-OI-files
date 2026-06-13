#include <bits/stdc++.h>
using namespace std;
bool mems [102];
int main ()
{
	int n, m; cin >>m >>n;
	memset (mems, 1, sizeof (mems));
	int all = m, i = 0, j = 0;
	while (all > 0)
	{
		i ++;
		if (i == m + 1) i = 1;
		if (mems [i])
		{
			j ++;
			if (j == n)
			{
				printf ("%d ", i);
				all --;
				mems [i] = 0;
				j = 0;
			}
		}
	}
	return 0;
}
