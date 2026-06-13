#include <bits/stdc++.h>
using namespace std;
int ts [10086], ts_ [10086], n, m;
int sus (int a)
{
	int sum = 0;
	for (int i = a; i < a + m; i ++)
		sum += ts [i];
	return sum;
}
int main ()
{
	scanf ("%d %d", &n, &m);
	for (int i = 1; i <= n; i ++)
		scanf ("%d", &ts [i]);
	for (int i = 1; i <= n - m + 1; i ++)
		ts_ [i] = sus (i);
	sort (ts_, ts_ + n - m + 1);
	for (int i = 1; i <= n; i ++)
		printf ("%d ", ts_ [i]);
	cout <<endl;
	printf ("%d", ts_ [1]);
	return 0;
}
