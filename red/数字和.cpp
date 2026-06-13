#include<bits/stdc++.h>
using namespace std;
int n,a,ans=0;
int main(){
	scanf("%d",&n);
	while(n){
		a=n%10;
		n/=10;
		ans+=a;
	}
	printf("%d",ans);
	return 0;
}

