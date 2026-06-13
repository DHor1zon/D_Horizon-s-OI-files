#include<bits/stdc++.h>
using namespace std;
long long nums=0; int n,num;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin>>num;
		nums+=num;
	}
	printf("%ld ",nums);
	printf("%.5lf",nums/(n*1.0));
	return 0;
}

