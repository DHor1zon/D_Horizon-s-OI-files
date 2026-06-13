#include <bits/stdc++.h>
using namespace std;
stack <int> a;
int main ()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++ i)
	{
		int b; cin >> b;
		a.push (b);
	}
	while (!a.empty ())
	{
		cout << a.top () << ' ';
		a.pop ();
	}
	return 0;
}

