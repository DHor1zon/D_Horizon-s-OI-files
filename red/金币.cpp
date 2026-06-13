#include<bits/stdc++.h>
using namespace std;
int k,n; long long coin;
int main(){
	scanf("%d",&k);
	for(int i=1;i<=k;){
		n++;
		//cout<<n<<endl;
		for(int j=1;j<=n;j++){
			coin+=n;
			//cout<<n<<' '<<coin<<' '<<i<<endl;
			if(i==k){
				printf("%lld",coin);
				return 0;
			}
			i++;
		}
	}
	return 0;
}
