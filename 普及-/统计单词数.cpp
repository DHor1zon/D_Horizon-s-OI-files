#include <bits/stdc++.h>
using namespace std;
string ch (string s)
{
	for (int i = 0; s [i]; ++ i)
		if ('a' <= s [i] && s [i] <= 'z')
			s [i] -= 32;
	return ' ' + s + ' ';
}
int main ()
{
	string a, s;
	cin >> a;
	getchar ();
	getline (cin, s);
	a = ch (a);
	s = ch (s);
	int b = s.find (a);
	int c = b;
	if (b == -1)
	{
		cout << -1;
		return 0;
	}
	else
	{
		int ans = 0;
		while (b != -1)
		{
			++ ans;
			b = s.find (a, b + 1);
		}
		cout << ans << ' ' << c;
	}
	return 0;
}
