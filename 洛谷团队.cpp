#include<bits/stdc++.h>
using namespace std;
int n,lo,lu;
int main(){
	scanf("%d",&n);
	lo=5*n;
	lu=11+3*n;
	if(lo<lu) printf("Local");
	else printf("Luogu");
	return 0;
}
