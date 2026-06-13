#include<bits/stdc++.h>
using namespace std;
int k,i=1,a1=1,a2=1,tmp;
int main(){
	scanf("%d",&k); 
	while(i<k){
		if(i%2==1){
			a1+=a2;
		}
		else{
			a2+=a1;
		}
		i++;
	}
	if(i%2==1) printf("%d",a1);
	else printf("%d",a2);
	return 0;
}
