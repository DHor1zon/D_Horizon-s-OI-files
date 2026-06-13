#include<bits/stdc++.h>
using namespace std;
int c,m,e;
int main(){
	scanf("%d %d %d",&c,&m,&e);
	if((c<60)+(m<60)+(e<60)==1) printf("1");
	else printf("0");
	return 0;
}
