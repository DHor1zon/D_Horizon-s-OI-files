#include <bits/stdc++.h>
using namespace std;
struct lnk
{
	string name;
	int ch, ma, en, all;
};
lnk stu [10086];
int main ()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++ i)
	{
		cin >> stu [i].name;
		cin >> stu [i].ch >> stu [i].ma >> stu [i].en;
		stu [i].all = stu [i].ch + stu [i].ma + stu [i].en;
	}
	for (int i = 1; i < n; ++ i)
	{
		for (int j = i + 1; j <= n; ++ j)
		{
			if (abs (stu [i].ch - stu [j].ch) <= 5 && abs (stu [i].ma - stu [j].ma) <= 5 && abs (stu [i].en - stu [j].en) <= 5 && abs (stu [i].all - stu [j].all) <= 10)
				cout << stu [i].name << ' ' << stu [j].name << endl;
		}
	}
	return 0;
}

