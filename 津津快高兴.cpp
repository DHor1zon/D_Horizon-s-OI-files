#include<bits/stdc++.h>
using namespace std;
int ha_y, ha_t, ha_al;
int main ()
{
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; i ++)
	{
		ha_y = ha_t;
		int a, b; scanf("%d %d", &a, &b);
		ha_t = ha_y + a + b - 8;
		ha_al += ha_t;
	}
	printf("%d", ha_al);
	return 0;
}
