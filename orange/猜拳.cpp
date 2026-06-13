#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int *a, *b; int *p;
	a = new (int);
	b = new (int);
	cin >> *a >> *b;
	if (*a == *b)
		cout << "tie";
	else if ((*a < *b && *b - *a < 2) || (*a - *b == 2))
		cout << "win";
	else
		cout << "lose";
	return 0;
}

