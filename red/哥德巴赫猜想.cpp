#include <bits/stdc++.h>
using namespace std;
bool pList [10086];
int n;
bool pan (int a)
{
	if (a <= 1)
		return false;
	for (int i = 3; i <= sqrt (a); i += 2)
		if (a % i == 0)
			return false;
	return true;
}
/*void sive (int n)
{
	pList [1] = 1;
	for (int i = 3; i <= sqrt (n); i += 2)
	{
		if (!pList [i])
			for (int j = 2 * i; j <= n; j += i)
			{
				pList [j] = 1;
			}
	}
}*/
int main ()
{
	scanf ("%d", &n);
	for (int i = 4; i <= n; i += 2)
	{
		if (i == 4)
		{
			printf ("4=2+2\n");
			continue;
		}
		for (int j = 3; j <= i; j += 2)
		{
			int a, b;
			a = j; b = i - a;
			//cout <<a <<' ' <<b <<endl;
			if (pan (a) && pan (b))
			{
				printf ("%d=%d+%d\n", i, a, b);
				break;
			}
		}
	}
	return 0;
}

