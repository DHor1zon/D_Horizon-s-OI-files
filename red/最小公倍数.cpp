#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int a, b, i = 1;
	cin >>a >>b;
	int s = b;
	while (s % a != 0)
		s = b * ++ i;
	printf ("%d", s);
	return 0;
}

