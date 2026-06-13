#include <bits/stdc++.h>
using namespace std;
int a, b, c;
bool big (int x, int y)
{
	return x > y;
}
int main ()
{
	scanf ("%d %d %d", &a, &b, &c);
	if (a < b) swap (a, b);
	if (b < c) swap (b, c);
	if (a < b) swap (a, b);
	if (b <= a - c + 1) printf ("%d", c + b + 1);
	else printf ("%d", a + (b - a + c - 1)/2 + 2);
	return 0;
}

