#include <bits/stdc++.h>
using namespace std;
int n, last, now, ans, tmpans;
int main ()
{
	scanf ("%d", &n);
	for (int i = 1; i <= n; ++ i)
	{
		
		last = now;
		scanf ("%d", &now);
		tmpans = now > last ? tmpans + 1 : 1;
		//cout << ans << ' ' << tmpans << endl;
		ans = ans < tmpans ? tmpans : ans;
	}
	cout << ans;
	return 0;
}

