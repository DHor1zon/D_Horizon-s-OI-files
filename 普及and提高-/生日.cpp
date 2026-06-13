#include <bits/stdc++.h>
#define ll long long

struct lnk
{
	std::string name;
	int y;
	int m;
	int d;
	int num;
};

lnk stu [102];
int n;

bool cmp (lnk x, lnk y)
{
	if (x.y != y.y)
		return x.y < y.y;
	else if (x.m != y.m)
		return x.m < y.m;
	else if (x.d != y.d)
		return x.d < y.d;
	else
		return x.num < y.num;
}

void cout ()
{
	for (int i = 1; i <= n; ++ i)
		std::cout << stu [i].name << std::endl;// << ' ' << stu [i].y << ' ' << stu [i].m << ' ' << stu [i].d << ' ' << stu [i].num << std::endl;
}

int main ()
{
	std::cin >> n;
	for (int i = 1; i <= n; ++ i)
	{
		std::cin >> stu [i].name;
		std::cin >> stu [i].y >> stu [i].m >> stu [i].d;
		stu [i].num = i;
	}
	//cout ();
	std::sort (stu + 1, stu + n + 1, cmp);
	cout ();
	return 0;
}

