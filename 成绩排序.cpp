#include <bits/stdc++.h>

struct lnk
{
	int ch, ma, eg;
	int nu, to, aw; //num, total, award;
	bool before;
};

lnk stu [1e4 + 86];
int n;

bool cmp (lnk x, lnk y)
{
	if (x.to != y.to) return x.to > y.to;
	else if (x.ch + x.ma != y.ch + y.ma) return x.ch + x.ma > y.ch + y.ma;
	else if (int l = std::max (x.ch, x.ma) != int r = std::max (y.ch, y.ma)) return l > r;
	else return 0;
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
	int k = 1; stu [1].aw = k;
	for (int i = 2; i <= n; ++ i)
	{
		if (stu [i])
	}
	return 0;
}

