#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int s;
	cin >> s;
	int i = 0, n = 0;
	while (n <= s)
		n += ++ i;
	cout << i;
	return 0;
}

