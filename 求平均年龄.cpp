#include<bits/stdc++.h>
using namespace std;
int n,h; double high=0;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin>>h;
		high+=h;
	}
	printf("%.2lf",high/(n*1.0));
	return 0;
}

