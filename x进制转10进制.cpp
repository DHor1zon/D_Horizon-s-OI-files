#include <bits/stdc++.h>
using namespace std;
bool lePan (char c)
{
	if ('A' <= c && 'Z' >= c)
		return 1;
	return 0;
}
int main ()
{
	//'A' = 48;
	string s; int a;
	cin >> a;
	cin >> s;
	int ans = 0;
	for (int i = s.size () - 1, k = 1; i >= 0; -- i, ++ k)
	{
		int x;
		if (lePan (s [i]))
			x = s [i] - 'A' + 10;
		else 
			x = s [i] - '0';
		ans += x * pow(a, k - 1);
		//printf ("$%d %d$ ", ans, x);
	}
	cout << ans;
	return 0;
}

