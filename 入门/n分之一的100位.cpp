#include <bits/stdc++.h>
using namespace std;
const int wei = 100;
//const long double a = 1 / 7.0;
int main ()
{
	int n, a, b, yu, i = 1;
	scanf ("%d %d %d", &a, &b, &n);
	yu = a % b;
	printf ("%d.", a / b);
	yu %= b;
	do
	{
		yu *= 10;
		printf ("%d", yu / b);
		yu = yu % b;
	}
	while (++ i <= n);
	return 0;
}

