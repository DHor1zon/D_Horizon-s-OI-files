#include <bits/stdc++.h>
using namespace std;
stack <int> num;
int main ()
{
	char c; int n, m; n = m = 0; int a, b;
	while (cin >> c)
	{
		if (c == '+')
		{
			a = num.top ();
			num.pop ();
			a += num.top ();
			num.pop ();
			num.push (a);
		}
		else if (c == '-')
		{
			a = num.top ();
			num.pop ();
			b = num.top ();
			num.pop ();
			num.push (b - a);
		}
		else if (c == '*')
		{
			a = num.top ();
			num.pop ();
			a *= num.top ();
			num.pop ();
			num.push (a);
		}
		else if (c == '/')
		{
			a = num.top ();
			num.pop ();
			b = num.top ();
			num.pop ();
			num.push (b / a);
		}
		else if (c == '.')
		{
			num.push (m);
			m = 0;
		}
		else if (c == '@')
			break;
		else
			m = m * 10 + (c - '0');
	}
	cout << num.top ();
	return 0;
}

