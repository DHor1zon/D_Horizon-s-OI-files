#include <bits/stdc++.h>
using namespace std;
stack <int> s;
int main ()
{
	int fnum, nnum; int ans = 0; char suan;
	cin >> fnum;
	s.push (fnum % 10000);
	while (cin >> suan >> nnum)
	{
		if (suan == '*')
		{
			nnum = nnum * s.top () % 10000;
			s.pop ();
		}
		s.push (nnum);
	}
	//cout << s.size ();
	while (s.size () > 0)
	{
		ans += s.top ();
		ans %= 10000;
		s.pop ();
	}
	cout << ans;
	return 0;
}

