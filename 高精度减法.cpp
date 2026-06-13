#include <bits/stdc++.h>
#define qwq awa
using namespace std;
char ca [10099], cb [10099];
int la, lb, lc, a [10099], b [10099], c [10099];
bool longp ()
{
	if (la > lb) return 1;
	else if (la < lb) return 0;
	else if (la == lb)
	{
		for (int i = 0; i < la; ++ i)
		{
			if (a [i] > b [i])
				return 1;
			else if (a [i] < b [i])
				return 0;
		}
	}
	return 1;
}
void ab ()
{
	int l = 0;
	while (l < la)
	{
		if (a [l] < b [l])
		{
			-- a [l + 1];
			a [l] += 10;
		}
		c [l] = a [l] - b [l];
		++ l;
	}
	while (c [l - 1] == 0 && l > 1)
		-- l;
	for (int i = l - 1; i >= 0; -- i)
		printf ("%d", c [i]);
}
void ba ()
{
	int l = 0;
	while (l < lb)
	{
		if (b [l] < a [l])
		{
			-- b [l + 1];
			b [l] += 10;
		}
		c [l] = b [l] - a [l];
		++ l;
	}
	while (c [l - 1] == 0 && l > 1)
		-- l;
	printf ("-");
	for (int i = l - 1; i >= 0; -- i)
		printf ("%d", c [i]);
}
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
	if (longp ())
		ab ();
	else if (!longp ())
		ba ();
	return 0;
}

