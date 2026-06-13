#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int *p, *q;
	p = (int *)malloc (40);
	q = p;
	*p = 1;
	++ p;
	*p = 2;
	cout << *p;
	free (q);
	return 0;
}

