#include<bits/stdc++.h>
using namespace std;
int n; double ad,a=0;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin>>ad;
		a+=ad;
	}
	printf("%.4lf",a/(n*1.0));
	return 0;
}

