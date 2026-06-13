#include <bits/stdc++.h>

char letters [101];
int n; int ans;

int main ()
{
	scanf ("%d", &n);
	getchar ();
	std::cin >> letters;
	//for (int i = 0; i < n; ++ i)
	//	printf ("%c", letters [i]);
	//printf ("\n");
	for (int i = 0; i < n - 1; ++ i)
		if (letters [i] == 'V' && letters [i + 1] == 'K')
		{
			letters [i + 1] = '*';
			letters [i] = '*';
			++ ans;
		}
	//for (int i = 0; i < n; ++ i)
	//	printf ("%c", letters [i]);
	//printf ("\n");
	for (int i = 0; i < n - 1; ++ i)
		if (letters [i] != '*' && letters [i + 1] == letters [i])
		{
			++ ans;
			break;
		}
	printf ("%d", ans);
	return 0;
}

