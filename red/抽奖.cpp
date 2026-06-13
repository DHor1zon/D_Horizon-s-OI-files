#include<bits/stdc++.h>
using namespace std;
int num,num_c,coin[10008];
int main ()
{
	int n; scanf("%d", &n);
	for(int i = 1; i <= n; i ++) scanf("%d", &coin[i]);
	scanf("%d", &num);
	for(int i = 1; i <= n; i++)
	{
		if(coin[i] == num) {num_c = i; break;}
	}
	printf("%d", num_c);
	return 0;
}

