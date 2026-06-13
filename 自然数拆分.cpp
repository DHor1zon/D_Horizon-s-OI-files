#include <bits/stdc++.h>

int n; int a [9]; 

void print (int s)
{
	for (int i = 1; i <= s - 1; ++ i)
		std::printf ("%d+", a [i]);
	if (s > 1)
		std::printf ("%d\n", a [s]);
}

void dfs (int s, int last)
{
	if (last == 0)
		if (s > 1)
			print (s - 1);
	for (int i = a [s - 1]; i <= last; ++ i)
	{
		a [s] = i;
		dfs (s + 1, last - i); 
	}
}

int main ()
{
	std::cin >> n;
	a [0] = 1;
	dfs (1, n);
	return 0;
}

