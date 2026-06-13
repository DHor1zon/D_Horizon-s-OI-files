#include<bits/stdc++.h>
using namespace std;
int n,j=0,y=0,t=0,a;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin>>a;
		j+=a;
		cin>>a;
		y+=a;
		cin>>a;
		t+=a;
	}
	printf("%d %d %d %d",j,y,t,j+y+t);
	return 0;
}

