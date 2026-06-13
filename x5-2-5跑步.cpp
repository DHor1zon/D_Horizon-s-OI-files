//x2-5-5
#include<bits/stdc++.h>
using namespace std;
int x,h,m,s;
int main(){
	cin>>x;
	h=x/(60*60);
	m=(x-h*60*60)/60;
	s=x-h*60*60-m*60;
	cout<<h<<' '<<m<<' '<<s;
	return 0;
}
