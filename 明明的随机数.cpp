#include <bits/stdc++.h>
using namespace std;
int nums [102], n, j;
void delMem (int a)
{
	for (int i = a; i < n; i ++)
		nums [i] = nums [i + 1];
	n --;
	j --;
}
void findMem ()
{
	for (int i = 1; i <= n; i ++)
	{
		int a = nums [i];
		for (j = i + 1; j <= n; j ++)
			if (nums [j] == a)
				delMem (j);
		//for (int i = 1; i <= n; i ++)
		//printf ("%d ", nums [i]);
		//cout <<endl;
	}
}
int main ()
{
	cin >> n;
	for (int i = 1; i <= n; i ++)
		scanf ("%d", &nums [i]);
	findMem ();
	sort (nums, nums + n + 1);
	printf ("%d\n", n);
	for (int i = 1; i <= n; i ++)
		printf ("%d ", nums [i]);
	return 0;
}

