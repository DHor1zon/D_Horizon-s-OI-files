#include <bits/stdc++.h>
using namespace std;
int tik [200086];
int main ()
{
	int n, m;
	scanf ("%d%d", &n, &m);
	for (int i = 1; i <= m; ++ i)
		scanf ("%d", &tik [i]);
	sort (tik + 1, tik + m + 1);
	for (int i = 1; i <= m; ++ i)
		printf ("%d ", tik [i]);
	return 0;
}

