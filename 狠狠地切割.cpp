#include <bits/stdc++.h>

const int N = 5 * 1e5 + 5;

int n, m;
int a [N], b [N];
int ans = 1;

void read ()
{
	scanf ("%d %d", &n, &m);
	for (int i = 1; i <= n; ++ i)
		scanf ("%d", &a [i]);
	for (int i = 1; i <= m; ++ i)
		scanf ("%d", &b [i]);
	std::sort (b + 1, b + m + 1);
}

int main ()
{
	read ();
	for (int i = 1; i <= n; ++ i)
	{
		//for (int i = 1; i <= n; ++ i)
			//printf ("%d ", a [i]);
		if (b [std::lower_bound (b + 1, b + m + 1, a [i]) - b] == a [i])
		{
			a [i] = 0;
			if (a [i - 1] && a [i + 1])
				++  ans;
		}
		//printf ("\n");
	}
	//for (int i = 1; i <= n; ++ i)
	//	printf ("%d ", a [i]);
	//printf ("\n");
	printf ("%d", ans);
	return 0;
}

