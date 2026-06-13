#include <bits/stdc++.h>
using namespace std;
char num [3000] [3000], a [100], b [100];
int main ()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++ i)
		cin >> num [i];
	for (int i = 1; i < n; ++ i)
	{
		for (int j = i + 1; j <= n; ++ j)
		{
			strcpy (a, num [i]);
			strcpy (b, num [j]);
			strcat (a, num [j]);
			strcat (b, num [i]);
			if (strcmp (a, b))
			{
				strcpy (a, num [i]);
				strcpy (num [i], num [j]);
				strcpy (num [j], a);
			}
		}
	}
	for (int i = 1; i <= n; ++ i)
		cout << num [i];
	return 0;
}

