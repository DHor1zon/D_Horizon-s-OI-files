#include <bits/stdc++.h>
using namespace std;
int n, lastNum = 3, nowNum = 3; bool flag, pList [10086];
bool pan (int a)
{
	for (int i = 2; i <= sqrt (a); ++ i)
		if (a % i == 0)
			return 0;
	return 1;
}

void xs (int n)
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
}
int main ()
{
	scanf ("%d", &n);
	xs (n);
	for (int i = 3; i <= n; i += 2)
	{
		lastNum = nowNum;
		if (!pList [i])
			nowNum = i;
		if (nowNum - lastNum == 2)
		{
			flag = 1;
			printf ("%d %d\n", lastNum, nowNum);
		}
	}
	if (!flag)
		printf ("empty");
	return 0;
}

