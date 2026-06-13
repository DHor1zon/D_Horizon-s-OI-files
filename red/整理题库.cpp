#include<bits/stdc++.h>
using namespace std;
short qs[1001];
int main()
{
	int n, m; scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++) scanf("%d", &qs[i]);
	for(int i = 0; i < m; i++) scanf("%d", &qs[i+n]);
	sort(qs, qs + n + 1);
	for(int i = 0; i < (n + m); i++) printf("%d ", qs[i]);
	return 0;
}

