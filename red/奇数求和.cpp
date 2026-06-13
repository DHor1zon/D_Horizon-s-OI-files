#include<bits/stdc++.h>
using namespace std;
int n,m,num=0;
int main(){
	scanf("%d %d",&n,&m);
	for(int i=n;i<=m;i++){
		num+=i%2!=0?i:0;
	}
	printf("%d",num);
	return 0;
}

