#include <bits/stdc++.h>
using namespace std;
queue <int> q;
bool qe [1086];
int ans;
int main ()
{
	int m, n; cin >> m >> n;
	int a;
	for (int i = 1; i <= n; ++ i)
	{
		cin >> a;
		if (!qe [a])
		{
			ans ++;
			qe [a] = 1;
			q.push (a);
			if (q.size () > m)
			{
				qe [q.front ()] = 0;
				q.pop ();
			}
		}
	}
	cout << ans;
	return 0;
}

