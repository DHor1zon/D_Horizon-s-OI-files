#include<bits/stdc++.h>
using namespace std;
int one=0,five=0,ten=0,k,a;
int main(){
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		cin>>a;
		switch(a){
			case 1:one++;break;
			case 5:five++;break;
			case 10:ten++;break;
		}
	}
	printf("%d\n%d\n%d",one,five,ten);
	return 0;
}

