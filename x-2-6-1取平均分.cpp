//x-2-6-1
#include<bits/stdc++.h>
using namespace std;
double s; int a,b;
int main(){
	for(int i=0;i<5;i++){
		cin>>a;
		b+=a;
	}
	s=b/5.0;
	cout<<fixed<<setprecision(1)<<s;
	return 0;
}
