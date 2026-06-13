#include <bits/stdc++.h>
using namespace std;
//zheLiShiWeiLeRangWoNengGouShuiYiHangDaiMa;
bool check (int a)
{
	int b = a, c = 0;
	while (b)
	{
		c = c * 10 + b % 10;
		b /= 10;
	}
	return a == c ? true : false;
}
int main ()
{
	int n, ans = 0;
	cin >> n;
	for (int i = 1; i <= n; ++ i)
		if (check (i))
			ans ++;
	cout << ans << endl;
	cout << char (ans / ans * ans / ans * ans / ans - ans / ans * ans / ans * ans / ans);
	return 0;
}

