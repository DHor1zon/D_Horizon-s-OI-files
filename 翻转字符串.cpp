#include<bits/stdc++.h>
using namespace std;
int main(){
	float e;
	int a,b,c,d,s;
	cin>>e;
	s=e*10;
	a=s%10;//小数部分 
	s=(s-a)/10;
	b=s%10;
	s=(s-b)/10;
	c=s%10;
	s=(s-c)/10;
	d=s%10;
	cout<<a<<"."<<b<<c<<d;
	return 0;
}
