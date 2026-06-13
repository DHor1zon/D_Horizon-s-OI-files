#include <bits/stdc++.h>

const int N = 1e6 + 86;
struct dh
{
	int st, en;
};
dh oj [N];
int n, ans;
int t;

bool cmp (dh x, dh y)
{
	if (x.en != y.en)
		return x.en < y.en;
	else if (x.st != y.st)
		return x.st <= y.st;
}

int main ()
{
	scanf ("%d", &n);
	for (int i = 1; i <= n; ++ i)
		scanf ("%d %d", &oj [i].st, &oj [i].en);
	
	std::sort (oj + 1, oj + n + 1, cmp);
	
	for (int i = 1; i <= n; ++ i)
		if (oj [i].st >= t)
		{
			++ ans;
			t = oj [i].en;
		}
	
	printf ("%d", ans);
	
	return 0;
}

