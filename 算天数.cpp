#include<bits/stdc++.h>
using namespace std;
int n,m,run=0;
int main(){
	scanf("%d %d",&n,&m);
	if((n%400==0)||(n%4==0)&&(n%100!=0)) run=1;
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) m=31;
	else if(m==4||m==6||m==9||m==11) m=30;
	else{
		if(run==1) m=29;
		else m=28;
	}printf("%d",m);
	return 0;
}
