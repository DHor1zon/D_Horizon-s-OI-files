#include <bits/stdc++.h>
using namespace std;
char ca [586], cb [586];
int la, lb, lc, a [586], b [586], c [586];
int main ()
{
	scanf ("%s", &ca);
	scanf ("%s", &cb);
	la = strlen (ca);
	lb = strlen (cb);
	for (int i = 0; i < la; ++ i)
		a [la - i - 1] = ca [i] - '0';
	for (int i = 0; i < lb; ++ i)
		b [lb - i - 1] = cb [i] - '0';
	lc = la > lb ? la : lb;
	for (int i = 0; i < lc; ++ i)
	{
		c [i] += a [i] + b [i];
		if (c [i] >= 10)
		{
			++ c [i + 1];
			c [i] %= 10;
		}
	}
	if (c [lc] > 0) ++ lc;
	for (int i = lc - 1; i >= 0; -- i)
		printf ("%d", c [i]);
	return 0;
}

