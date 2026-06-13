#include<bits/stdc++.h>
using namespace std;
int n,a,ans[10],i=0; bool l=false,ze=true;
int main(){
	scanf("%d",&n);
	if(n<0){
		l=true;
		n=abs(n);
	}
	while(n){
		a=n%10;
		n/=10;
		ans[i]=a;
		i++;
	}
	if(l) cout<<"-";
	for(i=(ans);i>=0;i--){
		if(ze&&ans[i]==0) cout<<"";
		else{
			cout<<ans[i];
			ze=true;
		}
	}
	return 0;
}

