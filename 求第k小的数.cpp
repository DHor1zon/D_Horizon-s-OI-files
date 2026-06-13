#include <bits/stdc++.h>
using namespace std;
int s [5000086];
int main ()
{
	int n, k; scanf ("%d%d", &n, &k);
	for (int i = 0; i < n; ++ i)
		scanf ("%d", &s [i]);
	nth_element (s, s + k, s + n);
	printf ("%d", s [k]);
	return 0;
}

