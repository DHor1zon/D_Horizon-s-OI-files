#include<bits/stdc++.h>
using namespace std;
int a,b;
int main(){
	scanf("%d",&a);
	while(a){
		b=b*10+a%10;
		a/=10;
	}
	printf("%d",b);
	return 0;
}

