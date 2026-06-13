#include <bits/stdc++.h>
using namespace std;

int main ()
{
	string s; int k, l;
	cin >> s >> k;
	l = s.size ();
	int a;
	bool flag = 0;
	while (k)
	{
		-- k;
		a = l - 1;
		for (int i = 0; i < l - 1; ++ i)
			if (s [i] > s [i + 1])
			{
				a = i;
				break;
			}
		s.erase (a, 1);
		-- l;
	}
	for (int i = 1; i <= l - 1; ++ i)
		if (s [i] == '0')
			s.erase (0, 1);
	if (s == "") cout << 0;
	else cout << s;
	return 0;
}

