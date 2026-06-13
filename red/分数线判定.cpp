#include <bits/stdc++.h>
using namespace std;
bool flag; int ans;
struct lnt
{
	int k, s;
};
lnt p [6086];
bool cmp (lnt x, lnt y)
{
	if (!flag)
		return x.s > y.s;
	else
		if (x.s != y.s)
			return x.s > y.s;
		else 
			return x.k < y.k;
}
int main ()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++ i)
		cin >> p [i].k >> p [i].s;
	sort (p + 1, p + n + 1, cmp);
	++ flag;
	int l, tmp;
	tmp = floor (m * 1.5);
	l = p [tmp].s;
	sort (p + 1, p + n + 1, cmp);
	for (int i = 1; i <= n; ++ i)
		if (p [i].s >= l)
			ans ++;
	cout << l << ' ' << ans << endl;
	for (int i = 1; i <= n; ++ i)
		if (p [i].s >= l)
			cout << p [i].k << ' ' << p [i].s << endl;
	return 0;
}

