#include <bits/stdc++.h>
using namespace std;
struct student {
	int hao, chi, all;
};
student stu [301];
bool cmp (student x, student y)
{
	if (x.all != y.all)
		return x.all > y.all;
	else if (x.chi != y.chi)
		return x.chi > y.chi;
	else return x.hao < y.hao;
}
int main ()
{
	int n; scanf ("%d", &n);
	for (int i = 1; i <= n; ++ i)
	{
		int a, b;
		scanf ("%d", &stu [i].chi);
		stu [i].all += stu [i].chi;
		scanf ("%d %d", &a, &b);
		stu [i].all += a + b;
		stu [i].hao = i;
	}
	sort (stu + 1, stu + n + 1, cmp);
	for (int i = 1; i <= 5; ++ i)
		printf ("%d %d\n", stu [i].hao, stu [i].all);
	return 0;
}

