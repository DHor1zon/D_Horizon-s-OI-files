#include<bits/stdc++.h>
using namespace std;
int ren[10005],n,best,best_num;
int main()
{
	//freopen("flagman1.in","r",stdin);
	//freopen("flagman1.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&ren[i]);
	for(int i=1;i<=n;i++)
		if(ren[i]>best)
		{
			best=ren[i];
			best_num=i;
		}
	int tmp=ren[1];
	ren[1]=ren[best_num];
	ren[best_num]=tmp;
	for(int i=1;i<=n;i++) printf("%d ",ren[i]);
	return 0;
}

