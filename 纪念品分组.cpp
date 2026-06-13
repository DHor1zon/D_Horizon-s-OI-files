#include <bits/stdc++.h>

int *p, *q;
int w, n, ttl, ans; //temp_total

int jnp [30086];

int main ()
{
	scanf ("%d %d", &w, &n);
	for (int i = 1; i <= n; ++ i)
		scanf ("%d", &jnp [i]);
	std::sort (jnp + 1, jnp + n + 1);
	p = &jnp [1], q = &jnp [n];
	
	//for (int i = 1; i <= n; ++ i)
	//	printf ("%d", jnp [i]);
	
	while (p <= q)
	{
		if (p != q)
		{
			if (*p + *q <= w)
				p ++, q --, ++ ans;
			else
				q --, ++ ans;
		}
		else
		{
			++ ans;
			break;
		}
	}
	
	printf ("%d", ans);
	
	return 0;
}

