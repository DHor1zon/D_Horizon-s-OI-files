#include<bits/stdc++.h>
using namespace std;

int c[1002], m[1002], e[1002];

int main ()
{
	int n, ans = 0; scanf("%d", &n);
	
	for (int i = 1; i <= n; i ++)
		scanf("%d %d %d", &c[i], &m[i], &e[i]);
		
	for (int i = 1; i <= n; i ++)
		for (int j = n; j > i; j --)
		{
			int c_c = abs(c[i] - c[j]);
			int m_c = abs(m[i] - m[j]);
			int e_c = abs(e[i] - e[j]);
			int all_c = abs(( c[i] + m[i] + e[i] ) - ( c[j] + m[j] + e[j] ));
			if (c_c <= 5 && m_c <= 5 && e_c <= 5 && all_c <= 10) ans ++;
		}
	
	printf("%d", ans);
	
	return 0;
}
