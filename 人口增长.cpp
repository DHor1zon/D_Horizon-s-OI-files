#include<bits/stdc++.h>
using namespace std;
int n,i=0; double x;
int main(){
	scanf("%lf %d",&x,&n);
	while(i<n){
		x*=1+0.001;
		i++; 
	}
	printf("%.4lf",x);
	return 0;
}
