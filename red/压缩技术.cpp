#include <bits/stdc++.h>
using namespace std;
int n; bool t;
void swp ()
{
	t = t ? 0 : 1;
}
int main ()
{
	scanf ("%d", &n);
	for (int i = 1, k = 1; i <= n * n;)
	{
		int a; scanf ("%d", &a);
		for (int j = 1; j <= a; ++ j)
		{
			printf ("%d", t);
			if (k == n)
			{
				printf ("\n");
				k = 0;
			}
			++ i;
			++ k;
		}
		swp ();
	}
	return 0;
}

