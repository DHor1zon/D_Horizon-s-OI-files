#include <bits/stdc++.h>
using namespace std;
bool lePan (char c)
{
	if ('A' <= c && 'Z' >= c)
		return 1;
	return 0;
}
void ot (int Ns, int x)
{
	int ans [10086]; int y; int i;
	for (i = 1; Ns; ++ i)
	{
		y = Ns % x;
		Ns /= x;
		ans [i] = y;
	}
	bool flag = 0;
	for (; i > 0; -- i)
	{
		if (ans [i] >= 10)
			cout << char (ans [i] - 10 + 'A');
		else if (ans [i] != 0 || flag)
		{
			flag = 1;
			cout << ans [i];
		}
	}
}
int main ()
{
	string s; int a, b;
	cin >> a;
	cin >> s;
	cin >> b;
	int ans = 0;
	for (int i = s.size () - 1, k = 1; i >= 0; -- i, ++ k)
	{
		int x;
		if (lePan (s [i]))
			x = s [i] - 'A' + 10;
		else 
			x = s [i] - '0';
		ans += x * pow(a, k - 1);
	}
	ot (ans, b);
	return 0;
}
