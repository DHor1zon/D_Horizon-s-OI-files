#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int x; string s; bool flag = 0;
	cin >> x >> s;
	for (int i = 0, k = s.size () - 1; i < s.size (); ++ i, -- k)
	{
		if (s [i] != '0')
		{
			if (i > 0 && flag)
				printf ("+");
			printf ("%d*%d^%d", s [i] - '0', x, k);
			flag = 1;
		}
		//printf ("$%d$ ", flag);
	}
	return 0;
}

