#include <bits/stdc++.h>
using namespace std;
stack <char> st;
bool pan ()
{
	if (st.empty ()) return 0;
	else return 1;
}
int main ()
{
	char c;
	while (cin >> c)
	{
		if (c == '@') break;
		if (c == '(') st.push (c);
		if (c == ')')
		{
			if (pan ()) st.pop ();
			else
			{
				cout << "NO";
				return 0;
			}
		}
	}
	if (st.empty ()) cout << "YES";
	else cout << "NO";
	return 0;
}

