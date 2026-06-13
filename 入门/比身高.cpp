#include<bits/stdc++.h>
using namespace std;
int h[10086], n, ans;
int main ()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i ++) cin>> h[i];
	for (int i = 1; i <= n; i ++)
	{
		int t1, t2;
		t1 = t2 = 0;
		for (int j = 1; j < i; j ++)
			if (h[i] < h[j]) t1 ++;
		for (int j = i + 1; j <= n; j --)
			if (h[i] < h[j]) t2 ++;
		if (t1 == t2) ans ++;
	}
	printf("%d", ans);
	return 0;
}

