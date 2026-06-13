#include <bits/stdc++.h>
using namespace std;
struct gao{
	string name;
	string sex;
	int year;
	int month;
};
bool cmp (gao x, gao y)
{
	if (x.year != y.year)
		return x.year > y.year;
	else return x.month > y.month;
}
gao stu [101];
int main ()
{
	int n; cin >> n;
	for (int i = 1; i <= n; ++ i)
		cin >>stu [i].name >>stu [i].sex >>stu [i].year >>stu [i].month;
	sort (stu + 1, stu + n + 1, cmp);
	for (int i = 1; i <= n; ++ i)
		cout <<stu [i].name <<' ' <<stu [i].sex <<' ' <<stu [i].year <<' ' <<stu [i].month <<endl;
	return 0;
}

