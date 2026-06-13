#include<bits/stdc++.h>
using namespace std;
int n,a,ans=0; bool flag1,flag2;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		flag1=1; flag2=1;
		if(i%7==0) flag1=0;
		a=i;
		while(a&&flag2){
			if(a%10==7) flag2=0;
			a/=10;
		}
		if(flag1&&flag2) ans+=i*i;
	}
	printf("%d",ans);
	return 0;
}
