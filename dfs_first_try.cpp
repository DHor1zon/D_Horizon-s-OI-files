#include <bits/stdc++.h>
int n, m; bool hash [20]; int a [20];
const int C = 0;
void printf ()
{
	for (int i = 0; i < m; ++ i)
		std::printf ("%5d", a [i]);
	std::printf ("\n");
}
void dfs (int s)
{
	if (s == m)
	{
		printf ();
		return;
	}
	for (int i = 1; i <= n; ++ i)
		if (!hash [i])
		{
			a [s] = i;
			hash [i] = 1;
			dfs (s + 1);
			hash [i] = 0;
		}
}
int main ()
{
	std::scanf ("%d %d", &n, &m); //m = n - C;
	dfs (0);
	return 0;
}
