#include<bits/stdc++.h>
using namespace std;
int h,f,r,c,temp;
int main(){
	scanf("%d %d",&h,&f);
	for(int i=0;i<=h;i++){
		for(int j=0;j<=(45-i);j++){
			if(i+j==h&&2*i+4*j==f) printf("%d %d",i,j);
		}
	}
	return 0;
}
