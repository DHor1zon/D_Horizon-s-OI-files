#include <bits/stdc++.h>
using namespace std;
struct lnt
{
	double x, y;
};
int main ()
{
	lnt a, b, c;
	cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
	double u, i, o, p, s;
	u = sqrt (pow (a.x - b.x, 2) + pow (a.y - b.y, 2));
	i = sqrt (pow (b.x - c.x, 2) + pow (b.y - c.y, 2));
	o = sqrt (pow (c.x - a.x, 2) + pow (c.y - a.y, 2));
	s = u + i + o;
	printf ("%.2lf", s);
	return 0;
}

