#include <bits/stdc++.h>

long long set [1001];
long long n = 0, ans;

int main ()
{
	
	while (std::cin >> set [++ n]);
    -- n;
	//printf ("%d\n", n);
    //for (int i = 1; i <= n; ++ i)
    //    printf ("%d ", set [i]);
    for (int i = 1; i <= n; ++ i)
    	ans += std::pow (2, n - 1) * set [i];
    printf ("%lld", ans);
	return 0;
}

