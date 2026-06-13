#include <bits/stdc++.h>
using namespace std;

int main ()
{
	stack <int> st;
	int a;
	while (cin >> a)
	{
		if (a == 0) break;
		st.push (a);
	}
	while (!st.empty ())
	{
		cout << st.top () << ' ';
		st.pop ();
	}
	return 0;
}

