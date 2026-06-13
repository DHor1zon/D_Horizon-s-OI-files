#include<bits/stdc++.h>
using namespace std;
double r,m,y,year=0;
int main(){
	scanf("%lf %lf %lf",&r,&m,&y);
	while(m<=y){
		m*=1+r/100.0;
		year++;
	}
	printf("%.0lf",year);
	return 0;
}

