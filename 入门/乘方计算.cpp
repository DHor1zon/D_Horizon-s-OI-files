#include<bits/stdc++.h>
using namespace std;
long long a,n;
int main(){
	scanf("%ld %ld",&a,&n);
	int b=a;
	for(int i=1;i<n;i++) a*=b;
	printf("%ld",a);
	return 0;
}

