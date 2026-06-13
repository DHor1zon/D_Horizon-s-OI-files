#include<bits/stdc++.h>
using namespace std;
int main(){
	double v;
	int h,r,a;
	cin>>h>>r;
	v=h*3.14*r*r/1000;
	a=ceil(20/v);
	cout<<a;
	return 0;
}
