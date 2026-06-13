#include<bits/stdc++.h>
using namespace std;
int nums[10010],l,m,ans;
int main ()
{
	scanf("%d %d",&l,&m);
	for(int i=1;i<=m;i++)
	{
		int a,b; cin>>a>>b;
		for(int j=a;j<=b;j++) nums[j]=1;
	}
	for(int i=0;i<=l;i++) if(nums[i]==0) ans++;
	printf("%d",ans);
	return 0;
}

