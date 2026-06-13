#include <bits/stdc++.h>
using namespace std;
int ans [3000], anss;
bool check (int a)
{
	return (a % 100 != 0) && (a % 4 == 0) || (a % 400 == 0) ? true : false;
}
int main ()
{
	int n, m;
	cin >> n >> m;
	for (int i = n; i <= m; ++ i)
		if (check (i))
		{
			anss ++;
			ans [anss] = i;
		}
	printf ("%d\n", anss);
	for (int i = 1; i <= anss; ++ i)
		printf ("%d ", ans [i]);
	return 0;
}

