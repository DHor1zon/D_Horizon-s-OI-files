#include<bits/stdc++.h>
using namespace std;
int h[10010],n,all,ans; double an;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++) cin>>h[i];
	for(int i=1;i<=n;i++) all+=h[i];
	an=all/(n*1.0);
	for(int i=1;i<=n;i++) if(h[i]>=an) ans++;
	printf("%d",ans);
	return 0;
}

