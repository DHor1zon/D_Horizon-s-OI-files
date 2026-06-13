#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int *p;
	char *q;
	p = new (int);
	q = new (char);
	*p = 65;
	*q = *p + 1;
	cout << *p << ' ' << *q;
	return 0;
}

