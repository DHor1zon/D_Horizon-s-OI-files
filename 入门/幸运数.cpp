#include<bits/stdc++.h>
using namespace std;
int nums[14]={4,7,44,47,74,77,444,447,474,477,744,747,777,774},n;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<14;i++)
		if(n%nums[i]==0)
		{
			printf("YES");
			return 0;
		}
	printf("NO");
	return 0;
}

