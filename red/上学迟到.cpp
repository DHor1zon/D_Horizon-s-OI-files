#include<bits/stdc++.h>
using namespace std;
int main(){
	int ansh,ansm,t,n;
	double s,v;
	cin>>s>>v;
	double a=s/v;
	t=ceil(a);
	n=8*60+24*60-10-t;
	if(n>=24*60) n-=24*60;
	ansh=n/60;
	ansm=n%60;
	cout<<setw(2)<<setfill('0')<<ansh<<":"<<setw(2)<<setfill('0')<<ansm;
	return 0;
}
