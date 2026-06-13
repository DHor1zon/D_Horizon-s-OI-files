#include<bits/stdc++.h>
using namespace std;
double x,h; int i=1;
int main(){
	scanf("%lf",&h);
	x=h;
	while(i<10){
		h*=0.5;
		x+=h*2;
		i++;
	}
	h*=0.5;
	cout<<x<<endl<<h<<endl;
	return 0;
}
