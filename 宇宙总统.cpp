#include <bits/stdc++.h>
//using namespace std;
struct lnk
{
	std::string s;
	int l;
	int num;
};
lnk tks [22]; 

void testF (int n)
{
	for (int i = 1; i <= n; ++ i)
		std::cout << tks [i].s << ' ' << tks [i].l << ' ' << tks [i].num << std::endl;
}

void cout ()
{
	std::cout << tks [1].num << std::endl << tks [1].s;
}

bool cmp (lnk x, lnk y)
{
	if (x.l != y.l)
		return x.l > y.l;
	else
		for (int i = 0; i < x.s.size (); ++ i)
			if (x.s[i] != y.s [i])
				return x.s[i] - '0' > y.s [i] - '0';
	return x.num < y.num;
			
}

int main ()
{
	int n;
	std::scanf ("%d", &n);
	for (int i = 1; i <= n; ++ i)
	{
		std::cin >> tks [i].s;
		tks [i].l = tks [i].s.size ();
		tks [i].num = i;
	}
	std::sort (tks + 1, tks + n + 1, cmp);
	cout ();
	
	//testF (n);
	
	return 0;
}
