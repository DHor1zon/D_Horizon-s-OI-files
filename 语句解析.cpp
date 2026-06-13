#include <bits/stdc++.h>

int vs [4];

int main ()
{
	char c1, c2;
	while (scanf ("%c:=%c;", &c1, &c2))
	{
		if (c2 >= '0' && c2 <= '9')
			vs [c1 - 'a' + 1] = c2 - '0';
		else
			vs [c1 - 'a' + 1] = vs [c2 - 'a' + 1];
	}
	printf ("%d %d %d", vs [1], vs [2], vs [3]);
	return 0;
}

