#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double a=1000;
	for(int i=1;i<4;i++){
		a*=1.0453;
	}cout<<fixed<<setprecision(2)<<a;
	return 0;
}
//cout<<fixed<<setprecision(2)<<1000*1.0453*1.0453*1.0453;
