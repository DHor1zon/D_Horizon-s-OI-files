#include<bits/stdc++.h>
using namespace std;
int cows[10086];
int main ()
{
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; i ++) scanf("%d", &cows[i]);
	sort (cows, cows + n + 1);
	printf ("%d", cows[n / 2 + 1]);
	return 0;
}

