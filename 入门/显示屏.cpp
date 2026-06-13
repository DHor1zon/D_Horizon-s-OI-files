#include <bits/stdc++.h>
using namespace std;
int sum [102], n;
void hang1 ()
{
	for (int i = 1; i < n; i ++)
	{
		switch (sum [i])
		{
			case 1 : printf ("..X"); break;
			case 2 : printf ("XXX"); break;
			case 3 : printf ("XXX"); break;
			case 4 : printf ("X.X"); break;
			case 5 : printf ("XXX"); break;
			case 6 : printf ("XXX"); break;
			case 7 : printf ("XXX"); break;
			case 8 : printf ("XXX"); break;
			case 9 : printf ("XXX"); break;
			case 0 : printf ("XXX"); break;
		}
		printf (".");
	}
	switch (sum [n])
	{
		case 1 : printf ("..X"); break;
		case 2 : printf ("XXX"); break;
		case 3 : printf ("XXX"); break;
		case 4 : printf ("X.X"); break;
		case 5 : printf ("XXX"); break;
		case 6 : printf ("XXX"); break;
		case 7 : printf ("XXX"); break;
		case 8 : printf ("XXX"); break;
		case 9 : printf ("XXX"); break;
		case 0 : printf ("XXX"); break;
	}
	printf ("\n");
}
void hang2 ()
{
	for (int i = 1; i < n; i ++)
	{
		switch (sum [i])
		{
			case 1 : printf ("..X"); break;
			case 2 : printf ("..X"); break;
			case 3 : printf ("..X"); break;
			case 4 : printf ("X.X"); break;
			case 5 : printf ("X.."); break;
			case 6 : printf ("X.."); break;
			case 7 : printf ("..X"); break;
			case 8 : printf ("X.X"); break;
			case 9 : printf ("X.X"); break;
			case 0 : printf ("X.X"); break;
		}
		printf (".");
	}
	switch (sum [n])
	{
		case 1 : printf ("..X"); break;
		case 2 : printf ("..X"); break;
		case 3 : printf ("..X"); break;
		case 4 : printf ("X.X"); break;
		case 5 : printf ("X.."); break;
		case 6 : printf ("X.."); break;
		case 7 : printf ("..X"); break;
		case 8 : printf ("X.X"); break;
		case 9 : printf ("X.X"); break;
		case 0 : printf ("X.X"); break;
	}
	printf ("\n");
}
void hang3 ()
{
	for (int i = 1; i < n; i ++)
	{
		switch (sum [i])
		{
			case 1 : printf ("..X"); break;
			case 2 : printf ("XXX"); break;
			case 3 : printf ("XXX"); break;
			case 4 : printf ("XXX"); break;
			case 5 : printf ("XXX"); break;
			case 6 : printf ("XXX"); break;
			case 7 : printf ("..X"); break;
			case 8 : printf ("XXX"); break;
			case 9 : printf ("XXX"); break;
			case 0 : printf ("X.X"); break;
		}
		printf (".");
	}
	switch (sum [n])
	{
		case 1 : printf ("..X"); break;
		case 2 : printf ("XXX"); break;
		case 3 : printf ("XXX"); break;
		case 4 : printf ("XXX"); break;
		case 5 : printf ("XXX"); break;
		case 6 : printf ("XXX"); break;
		case 7 : printf ("..X"); break;
		case 8 : printf ("XXX"); break;
		case 9 : printf ("XXX"); break;
		case 0 : printf ("X.X"); break;
	}
	printf ("\n");
}
void hang4 ()
{
	for (int i = 1; i < n; i ++)
	{
		switch (sum [i])
		{
			case 1 : printf ("..X"); break;
			case 2 : printf ("X.."); break;
			case 3 : printf ("..X"); break;
			case 4 : printf ("..X"); break;
			case 5 : printf ("..X"); break;
			case 6 : printf ("X.X"); break;
			case 7 : printf ("..X"); break;
			case 8 : printf ("X.X"); break;
			case 9 : printf ("..X"); break;
			case 0 : printf ("X.X"); break;
		}
		printf (".");
	}
	switch (sum [n])
	{
		case 1 : printf ("..X"); break;
		case 2 : printf ("X.."); break;
		case 3 : printf ("..X"); break;
		case 4 : printf ("..X"); break;
		case 5 : printf ("..X"); break;
		case 6 : printf ("X.X"); break;
		case 7 : printf ("..X"); break;
		case 8 : printf ("X.X"); break;
		case 9 : printf ("..X"); break;
		case 0 : printf ("X.X"); break;
	}
	printf ("\n");
}
void hang5 ()
{
	for (int i = 1; i < n; i ++)
	{
		switch (sum [i])
		{
			case 1 : printf ("..X"); break;
			case 2 : printf ("XXX"); break;
			case 3 : printf ("XXX"); break;
			case 4 : printf ("..X"); break;
			case 5 : printf ("XXX"); break;
			case 6 : printf ("XXX"); break;
			case 7 : printf ("..X"); break;
			case 8 : printf ("XXX"); break;
			case 9 : printf ("XXX"); break;
			case 0 : printf ("XXX"); break;
		}
		printf (".");
	}
	switch (sum [n])
	{
		case 1 : printf ("..X"); break;
		case 2 : printf ("XXX"); break;
		case 3 : printf ("XXX"); break;
		case 4 : printf ("..X"); break;
		case 5 : printf ("XXX"); break;
		case 6 : printf ("XXX"); break;
		case 7 : printf ("..X"); break;
		case 8 : printf ("XXX"); break;
		case 9 : printf ("XXX"); break;
		case 0 : printf ("XXX"); break;
	}
	printf ("\n");
}
void ele (int a)
{
	int i = n;
	while (a)
	{
		sum [i] = a % 10;
		a /= 10;
		i --;
	}
}
int main ()
{
	cin >>n;
	int a; cin >> a;
	ele (a);
	for (int i = 1; i <= n; i ++) printf ("%d\n",sum[i]);
	hang1 ();
	hang2 ();
	hang3 ();
	hang4 ();
	hang5 ();
	return 0;
}

