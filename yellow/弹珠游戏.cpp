#include <bits/stdc++.h>

const int N = 1e3 + 86;
int ems [N] [N];
int n, ans;

void scan (std::string s)
{
	scanf ("%d", &n);
	for (int i = 1; i <= n; ++ i)
		for (int j = 1; j <= n; ++ j)
			scanf ("%d", &ems [i] [j]);
}

int plus (int x, int y)
{
	int ret = 0;
	for (int i = 1; i <= n; ++ i)
		ret += ems [i] [y];
	for (int i = 1; i <= n; ++ i)
		ret += ems [x] [i];
	return ret;
}

void run (std::string s)
{
	int max = 0; bool empty = 0;
	for (int i = 1; i <= n; ++ i)
		for (int j = 1; j <= n; ++ j)
			if (!ems [i] [j])
				max = std::max (max, plus (i, j)), empty = true;
	if (!empty)
		printf ("Bad Game!");
	else
		printf ("%d", max);
}


























int main ()
{
	scan ("GIVE ME RUN!!!!");
	run ("I NEED AC!!!!");
	return 0;
}
