#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
	double a,b,c,q;
	cin>>a>>b>>c;
	q=(a+b+c)/2; 
	cout<<fixed<<setprecision(1)<<sqrt(q*(q-a)*(q-b)*(q-c));
	return 0;
}
