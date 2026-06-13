#include <bits/stdc++.h>

char type;
int a, b, c;
int n;
char ans [186], in [86];

bool isNum (char poi)
{
	return !('a' <= poi && 'c' >= poi);
}

int main ()
{
	std::cin >> n;
	for (int i = 1; i <= n; ++ i)
	{
		std::cin >> in;
		if (!isNum (in [0]))
		{
			type = in [0];
			std::cin >> a >> b;
		}
		else
		{
			sscanf (in, "%d", &a);
			std::cin >> b;
		}
		memset (ans, 0, sizeof (ans));
		if (type == 'a')
			sprintf (ans, "%d+%d=%d", a, b, a + b);
		else if (type == 'b')
			sprintf (ans, "%d-%d=%d", a, b, a - b);
		else
			sprintf (ans, "%d*%d=%d", a, b, a * b);
		
		printf ("%s\n%d\n", ans, strlen (ans));
	}
	return 0;
}

