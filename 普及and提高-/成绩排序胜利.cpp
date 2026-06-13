#include <bits/stdc++.h>

const int N = 1e4 + 86;

struct lnk
{
	int ch, ma, eg;
	int nu, to, aw; //num, total, award;
	bool before;
};

lnk stu [N];
int n;

bool tog (lnk x, lnk y)
{
	return ((x.to == y.to) && (x.ch + x.ma == y.ch + y.ma) && (std::max (x.ch, x.ma) == std::max (y.ch, y.ma)));
}

bool cmp (lnk x, lnk y)
{
	if (x.to != y.to) return x.to > y.to;
	else if (x.ch + x.ma != y.ch + y.ma) return x.ch + x.ma > y.ch + y.ma;
	int l = std::max (x.ch, x.ma);
	int r = std::max (y.ch, y.ma);
	if (l != r) return l > r;
	else return x.nu < y.nu;
}

bool cmp_ (lnk x, lnk y)
{
	return x.nu < y.nu;
}

int main ()
{
	int n;
	scanf ("%d", &n);
	for (int i = 1; i <= n; ++ i)
	{
		scanf ("%d %d %d", &stu [i].ch, &stu [i].ma, &stu [i].eg);
		stu [i].nu = i;
		stu [i].to = stu [i].ch + stu [i].ma + stu [i].eg;
	}
	std::sort (stu + 1, stu + n + 1, cmp);
	stu [1].aw = 1;
	for (int i = 2; i <= n; ++ i)
	{
		if (tog (stu [i - 1], stu [i]))
			stu [i].aw = stu [i - 1].aw;
		else
			stu [i].aw = i;
	}
	std::sort (stu + 1, stu + n + 1, cmp_);
	for (int i = 1; i <= n; ++ i)
		printf ("%d\n", stu [i].aw);
	return 0;
}

