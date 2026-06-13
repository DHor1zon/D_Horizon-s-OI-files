#include<iostream>
using namespace std;
int main(){
	double r,m,y;
	int k=0;
	cin>>r>>m>>y;
	while(m<=y){
		m=m*(1+r/100.0);
		k=k+1;
	}
	cout<<k<<endl;
	return 0;
}
