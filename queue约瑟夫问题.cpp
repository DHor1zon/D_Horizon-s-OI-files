#include <bits/stdc++.h>

std::queue <int> q;
int n, m;

int main ()
{
	std::cin >> n >> m;
	for (int i = 1; i <= n; ++ i)
		q.push (i);
	int now = 1;
	while (!q.empty ())
	{
		int a = q.front ();
		q.pop ();
		if (now != m)
		{
			++ now;
			q.push (a);
		}
		else
		{
			now = 1;
			printf ("%d ", a);
		}
	}
	return 0;
}

