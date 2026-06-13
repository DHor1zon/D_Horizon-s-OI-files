#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n, k, ans;
	cin >> n >> k;
	ans = n + (n - 1) / (k - 1);
	cout <<ans;
	return 0;
}

