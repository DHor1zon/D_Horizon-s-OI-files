#include <bits/stdc++.h>
using namespace std;
int tr [10086]; int ans;
void pop (int n)
{
	for (int i = 1; i < n; ++ i)
	{
		bool flag = true;
		for (int j = 1; j <= n - i; ++ j)
			if (tr [j] > tr [j + 1])
			{
				swap (tr [j], tr [j + 1]);
				ans ++;
				flag = false;
			}
		if (flag) break;
	}
}
int main ()
{
	int n; cin >> n;
	for (int i = 1; i <= n; ++ i)
		cin >> tr [i];
	pop (n);
	cout << ans;
	return 0;
}

