#include <bits/stdc++.h>

const int N = 2 * 1e5 + 86;
int candy [N];
long long ans; int x, n;

int main ()
{
	scanf ("%d %d", &n, &x);
	for (int i = 1; i <= n; ++ i)
		scanf ("%d", &candy [i]);
		
	if (candy [1] > x)
		ans += (candy [1] - x), candy [1] = x;
	
	for (int i = 2; i <= n; ++ i)
		if (candy [i - 1] + candy [i] > x)
		{
			int delta = (candy [i - 1] + candy [i]) - x;
			candy [i] -= delta;
			ans += delta;
		}
	
	printf ("%d\n", ans);
	//for (int i = 1; i <= n; ++ i)
	//	printf ("%d ", candy [i]);
	
	return 0;
}

