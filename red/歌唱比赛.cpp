#include <bits/stdc++.h>
using namespace std;
int nowP [10086]; double all [10086];
int main ()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++ i)
	{
		int fenn = 0;
		for (int j = 1; j <= m; ++ j)
			cin >> nowP [j];
		sort (nowP + 1, nowP + 1 + m);
		double fen;
		for (int j = 2; j < m; ++ j)
			fenn += nowP [j];
		fen = fenn / ((m - 2) / 1.0);
		all [i] = fen;
	}
	sort (all + 1, all + 1 + n);
	printf ("%.2lf", all [n]);
	return 0;
}

