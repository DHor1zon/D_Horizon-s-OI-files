#include<bits/stdc++.h>
using namespace std;
double a,b,c,under,x1,x2;
int main(){
	scanf("%lf %lf %lf",&a,&b,&c);
	under=b*b-4*a*c;
	if(under>=0){
		x1=(-1*b+sqrt(under))/(2*a);
		x2=(-1*b-sqrt(under))/(2*a);
		if(x1==x2){
			 printf("x1=x2=%.5lf",x1);
			 return 0;
		}
		else if(x1>x2) swap(x1,x2);
		printf("x1=%.5lf;x2=%.5lf",x1,x2);
	}
	else printf("No answer!");
	return 0; 
}
