#include <bits/stdc++.h>
using namespace std;
int n, a; bool t;
void swp ()
{
	t = t ? 0 : 1;
}
int main ()
{
	char ma [202];
	scanf ("%s", ma);
	n = strlen (ma);
	for (int i = 1; i < n; ++ i)
		scanf ("%s", ma);
	printf ("%d ", n);
	for (int i = 1; i <= n * n; )
	{
		for (int j = 0; a; ++ j)
		{
			a = 0;
			if (ma [j + i] == t)
			{
				++ i;
				a = ma [j + i] - '0' == t;
			}
			printf ("%d ", a);
		}
		swp ();
	}
	return 0;
}

