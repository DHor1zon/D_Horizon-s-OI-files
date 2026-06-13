#include <bits/stdc++.h>
using namespace std;
bool lights [10000000];
int n, t;
int a;
int main ()
{
	scanf ("%d", &n);
	for (int i = 1; i <= n; ++ i)
	{
		double a;
		scanf ("%lf", &a);
		scanf ("%d", &t);
		for (int j = 1; j <= t; ++ j)
			lights [int (j * a)] = lights [int (j * a)] ? 0 : 1;
	}
	for (int i = 1; ; ++ i)
		if (lights [i])
		{
			printf ("%d", i); 
			break;
		}
	return 0;
}

