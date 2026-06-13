#include <bits/stdc++.h>
using namespace std;
struct lnk
{
	int hao, ye, tuo;
	double all;
	string d;
};
lnk stu [10086];
int main ()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++ i)
	{
		cin >> stu [i].hao >> stu [i].ye >> stu [i].tuo;
		if (stu [i].ye + stu [i].tuo > 140 && stu [i].ye * 7 + stu [i].tuo * 3 >= 800)
			stu [i].d = "Excellent";
		else
			stu [i].d = "Not excellent";
	}
	for (int i = 1; i <= n; ++ i)
		cout << stu [i].d << endl;
	return 0;
}

