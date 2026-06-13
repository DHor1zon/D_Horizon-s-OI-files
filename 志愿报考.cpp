#include <bits/stdc++.h>
//#define int long long

int m, n;
const int N = 1e5 + 5;
int sch [N];

int get (int x)
{
	int tmp = std::lower_bound (sch + 1, sch + m + 1, x) - sch;
	int a1 = sch [tmp <= m ? tmp : tmp - 1];
	int a2 = sch [tmp > 1 ? tmp - 1 : tmp];
	return (std::min (std::abs (x - a1), std::abs (x - a2)));
}

int main ()
{
	std::cin >> m >> n;
	for (int i = 1; i <= m; ++ i)
		std::cin >> sch [i];
	//std::cout << "%%%%%%%\n";
	long long ans = 0;
	std::sort (sch + 1, sch + m + 1);
	for (int i = 1; i <= n; ++ i)
	{
		int stu;
		std::cin >> stu;
		ans += get (stu);
	}
	printf ("%d", ans);
	return 0;
}

