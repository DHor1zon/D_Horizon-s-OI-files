#include <bits/stdc++.h>
using namespace std;
string otto (string a,int p)
{
	string b;
	//cout << '*' << a << '*' << endl;
	reverse (a.begin (), a.end ());
	int l = 0;
	//if (p == 1)
	//{
		for (int i = 0; i < a.size () - 1; ++ i)
		{
			if (a [i] != '0') break;
			++ l;
		}
		a.erase (0, l);
	//}
	if (p == 2)
	{
		//cout << '#' << a << '#' << endl;
		for (int i = a.size () - 1; i > 0; -- i)
		{
			if (a [i] != '0') break;
			++ l;
		}
		a.erase (a.size () - l, l);
	}
	return a;
}
int main ()
{
	string a, ans; int ty = 0, p = 1; char c, suan;
	while (cin >> c)
	{
		if (c == '/')
		{
			ty ++;
			suan = c;
			break;
		}
		if (c == '.')
		{
			ty ++;
			p = 2;
			suan = c;
			break;
		}
		if (c == '%')
		{
			suan = c;
			break;
		}
		a += c;
	}
	//cout << '&' << a << ' ' << p << '&' << endl;
	ans += otto (a, 1);
	if (!ty)
	{
		cout << ans;
		if (suan == '%')
			cout << '%';
		return 0;
	}
	ans += suan;
	//getchar ();
	cin >> a;
	//cout << '&' << a << '&' << endl;
	ans += otto (a, p == 2 ? 2 : 1);
	cout << ans;
	return 0;
}

