#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int a, b;
	int *p;
	cin >> a >> b;
	if (a < b)
		p = &a;
	else p = &b;
	cout << *p * 2 << endl;
	return 0;
}

