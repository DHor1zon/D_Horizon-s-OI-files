#include<bits/stdc++.h>
using namespace std;
int n,x,num=0,j;
int main(){
	scanf("%d %d",&n,&x);
	for(int i=1;i<=n;i++){
		int flag=1;
		j=i;
		while(j){
			if(j%10==x) num++;
			j/=10;
		}
	}
	printf("%d",num);
	return 0;
}

