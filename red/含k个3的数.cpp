#include<bits/stdc++.h>
using namespace std;
unsigned long long m; int k,t;
int main(){
	scanf("%ld %d",&m,&k);
	while(m){
		if(m%10==3) t++;
		m/=10;
	}
	if(k==t) printf("YES");
	else printf("NO");
	return 0;
}
