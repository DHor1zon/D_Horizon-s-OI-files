#include<bits/stdc++.h>
using namespace std;
int n,a,best=0;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin>>a;
		best=best<a?a:best;
	}
	printf("%d",best);
	return 0;
}

