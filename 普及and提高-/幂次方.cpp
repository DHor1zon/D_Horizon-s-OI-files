#include <bits/stdc++.h>

void f (int a)
{
	for (int i = 14; i >= 0; -- i)
	{
		if (std::pow (2, i) <= a)
		{
			if (i == 0)
				printf ("2(0)");
			else if (i == 1)
				printf ("2");
			else
			{
				printf ("2(");
				f (i);
				printf (")");
			}
			a -= pow (2, i);
			if (a)
				printf ("+");
		}
	}
}

int main ()
{
	int in; std::cin >> in;
	f (in);
	return 0;
}
