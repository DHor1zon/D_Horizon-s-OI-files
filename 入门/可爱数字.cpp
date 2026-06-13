#include<bits/stdc++.h>
using namespace std;
int even=0,ft=0,n;
int main(){
	scanf("%d",&n);
	if(n%2==0) even=1;
	if(n>4&&n<=12) ft=1;
	
	if(even&&ft) printf("1 ");
	else printf("0 ");
	
	if(even||ft) printf("1 ");
	else printf("0 ");
	
	if(!(even&&ft)&&(even||ft)) printf("1 ");
	else printf("0 ");
	
	if(!even&&!ft) printf("1 ");
	else printf("0 ");
	
	return 0;
}
