#include<bits/stdc++.h>
using namespace std;
char le; int a,b,c;
int main(){
	scanf("%c",&le);
	if(le=='J'){
		scanf("%d %d",&a,&b);
		printf("%d %d",2*(a+b),a*b);
		return 0;
	}
	else{
		scanf("%d %d %d",&a,&b,&c);
		printf("%d",a+b+c);
		return 0;
	}
}
