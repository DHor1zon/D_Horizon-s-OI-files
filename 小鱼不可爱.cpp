#include<bits/stdc++.h>
using namespace std;
int fish[10086];
int main ()
{
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; i ++) scanf("%d", &fish[i]);
	for (int i = 1; i <= n; i ++)
	{
		int cute = 0;
		for(int j = 1; j < i; j ++)
			if (fish[j] < fish[i]) cute ++;
		printf("%d ", cute);
	}
	return 0;
}
