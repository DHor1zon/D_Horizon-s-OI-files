#include <bits/stdc++.h>
int main ()
{
	std::string sa, sb;
	double a;
	std::cin >> a;
	std::cin >> sa >> sb;
	double all = sa.size (), same = 0;
	for (char *p = &sa [0], *q = &sb [0]; p < &sa [0] + sa.size (); ++ p, ++ q)
		if (*p == *q) ++ same;
	std::cout << (same / all >= a ? "yes" : "no");
	return 0;
}

