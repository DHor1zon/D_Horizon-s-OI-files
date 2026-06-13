#include<bits/stdc++.h>
using namespace std;
int x,prime; char c;
int main(){
	scanf("%d %c",&x,&c);
	if(x<=1000) prime=8;
	else prime=ceil((x-1000)/500.0)*4+8;
	switch(c){
		case 'y': prime+=5; break;
	}
	printf("%d",prime);
	return 0;
}
