#include <bits/stdc++.h>
using namespace std;
struct lnk
{
	string name;
	int hao, ch, ma, en, all;
};
lnk stu [10086];
bool cmp (lnk x, lnk y)
{
	if (x != y) return x.all > y.all;
	else return x.hao > y.hao;
}
int main ()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++ i)
	{
		cin >> stu [i].name;
		cin >> stu [i].ch >> stu [i].ma >> stu [i].en;
		stu [i].all = stu [i].ch + stu [i].ma + stu [i].en;
		stu [i].hao = i;
	}
	sort (stu + 1, stu + 1 + n, cmp);
	cout << stu [1].name << ' ' << stu [1].ch << ' ' << stu [1].ma << ' ' << stu [1].en;
	return 0;
}

