#include <bits/stdc++.h>

struct lnk
{
	int h, p; //height, power
};

lnk aps [5086];
int n, s;
int tab; //touchAble
int ans;

bool cmp (lnk x, lnk y)
{
	return x.p != y.p ? x.p <= y.p : x.h < y.h;
}

int main ()
{
	scanf ("%d %d", &n, &s);
	int tmp;
	scanf ("%d %d", &tmp, &tab);
	tab += tmp;
	for (int i = 1; i <= n; ++ i)
		scanf ("%d %d", &aps [i].h, &aps [i].p);
	std::sort (aps + 1, aps + n + 1, cmp);
	
	for (int i = 1; i <= n; ++ i)
	{
		if (s - aps [i].p < 0)
			break;
		if (tab >= aps [i].h)
			s -= aps [i].p, ++ ans;
	}
	
	printf ("%d", ans);
	
	//for (int i = 1; i <= n; ++ i)
	//	printf ("%d %d\n", aps [i].h, aps [i].p);
	
	return 0;
}
