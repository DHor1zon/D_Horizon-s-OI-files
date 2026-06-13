#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d",t%10);
			t++;
		}
		printf("\n");
	}
	return 0;
}

