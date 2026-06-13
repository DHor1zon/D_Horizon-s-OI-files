#include <bits/stdc++.h>
using namespace std;
int num [10000086];
int main ()
{
	int n, l; cin >> n; int ji = 0, oi = 0; 
	for (l = 1; l <= n; l ++)
	{
		int a; scanf ("%d", &a);
		num [a] ++;
	}
    for (int i = 1; i <= 10000086; ++ i)
    	if (num [i] % 2 == 1)
    	{
    		cout << i;
    		return 0;
		}
	return 0;
}

