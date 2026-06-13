#include <bits/stdc++.h>

bool q [15], ruld [100], lurd [100];
int n; int ans, sans [15];

void print ()
{
	++ ans;
	if (ans > 3)
		return;
	else
	{
		for (int i = 1; i <= n; ++ i)
			std::printf ("%d ", sans [i]);
		std::printf ("\n");	
	}
}

void dfs (int s)
{
	if (s > n)
		print ();
	for (int i = 1; i <= n; ++ i)
	{
		if (!q [i] && !ruld [s + i] && !lurd [s - i + 15])
		{
			q [i] = 1;
			ruld [s + i] = 1;
			lurd [s - i + 15] = 1;
			sans [s] = i;
			dfs (s + 1);
			q [i] = 0;
			ruld [s + i] = 0;
			lurd [s - i + 15] = 0;
		}
	}
}

int main ()
{
	std::cin >> n;
	dfs (1);
	std::printf ("%d", ans);
	return 0;
}
