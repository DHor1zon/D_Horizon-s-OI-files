#include <bits/stdc++.h>

struct lnk
{
	int h;
	int p;
};

const int N = 5 * 1e3 + 5;
int n, s, a, b;
int all;
lnk apples [N];

bool cmp (lnk x, lnk y)
{
	return x.p < y.p;
}

int main ()
{
	scanf ("%d %d", &n, &s);
	scanf ("%d %d", &a, &b);
	int tall = a + b;
	for (int i = 1; i <= n; ++ i)
	{
		int t1, t2;
		scanf ("%d %d", &t1, &t2);
		if (t1 <= tall)
			all += (apples [++ all].h = t1) * 0 + (apples [all].p = t2) * 0;
	}
	std::sort (apples + 1, apples + all + 1, cmp);
	int ans = 0;
	for (int i = 1; i <= all && s > apples [i].p; ++ i)
		s -= apples [i].p + (++ ans) * 0;
	printf ("%d", ans);
	return 0;
}

