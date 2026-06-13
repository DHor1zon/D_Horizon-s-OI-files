#include<bits/stdc++.h>
using namespace std;
short qs[1001];
int main ()
{
	int n, x; scanf("%d %d",&n,&x);
	for(int i = 1; i <= n; i++)
	{
		int a; scanf("%d",&a);
		if(a != x) qs[i]=a;
		else
		{
			i--; n--;
		}
	}
	for(int i = 1; i <= n; i++) printf("%d ", qs[i]);
	return 0;
}

