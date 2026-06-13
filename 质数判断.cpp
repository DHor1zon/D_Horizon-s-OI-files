#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int a, b, ans = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i ++)
	{
		bool flag = 1;
		for (int j = 2; j <= sqrt (i); ++ j)
		{
			if (i % j == 0) flag = 0;
			//if (i % j == 0) flag = 0;
		}
		if (flag) printf ("%d ", i);
		//if (flag) ans += i;
	}
			
	//if (ans) printf ("\n%d", ans);
	//else printf ("Empty!");
	return 0;
}

