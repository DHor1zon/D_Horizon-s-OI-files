#include <bits/stdc++.h>
using namespace std;
double ans;
struct lnt
{
	int x, y, z;
};
bool cmp (lnt x, lnt y)
{
	return x.z < y.z;
}
lnt p [50086];
int main ()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++ i)
		cin >> p [i].x >> p [i].y >> p [i].z;
	sort (p + 1, p + n + 1, cmp);
	//for (int i = 1; i <= n; ++ i)
	//	cout << p [i].z << ' ';
	for (int i = 1; i < n; ++ i)
		ans += sqrt (pow (p [i + 1].x - p [i].x, 2) + pow (p [i + 1].y - p [i].y, 2) + pow (p [i + 1].z - p [i].z, 2));
	printf ("%.3lf", ans);
	return 0;
}

