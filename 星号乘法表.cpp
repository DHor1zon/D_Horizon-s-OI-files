#include <bits/stdc++.h>
using namespace std;
void planA ()
{
	for (int i = 1; i <= 5; ++ i)
	{
		for (int j = 1; j <= 9; ++ j)
			printf ("*");
		printf ("\n");
	}
	cout <<endl;
}
void planB ()
{
	for (int i = 1; i <= 9; ++ i)
	{
		for (int j = 1; j <= i; ++ j)
			printf ("*");
		printf ("\n");
	}
	cout <<endl;
}
void planC ()
{
	for (int i = 1, k = 4; i <= 9; i += 2, -- k)
	{
		for (int j = 1; j <= k; ++ j)
			printf (" ");
		for (int j = 1; j <= i; ++ j)
			printf ("*");
		for (int j = 1; j <= k; ++ j)
			printf (" ");
		printf ("\n");
	}
	cout <<endl;
}
void planD ()
{
	for (int i = 1, k = 4; i <= 9; i += 2, -- k)
	{
		for (int j = 1; j <= k; ++ j)
			printf (" ");
		for (int j = 1; j <= i; ++ j)
			printf ("*");
		for (int j = 1; j <= k; ++ j)
			printf (" ");
		printf ("\n");
	}
	int k = 3, i = 3;
	for (int j = 1; j <= 5; ++ j)
	{
		for (int l = 1; l <= k; ++ l)
			printf (" ");
		for (int l = 1; l <= i; ++ l)
			printf ("*");
		for (int l = 1; l <= k; ++ l)
			printf (" ");
		printf ("\n");
	}
	cout <<endl;
}
int main ()
{
	planA ();
	planB ();
	planC ();
	planD ();
	for (int i = 1; i <= 5; ++ i)
	{
		printf ("hhhhhhhhh");
		cout<<endl;
	}
	return 0;
}

