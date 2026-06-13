#include<bits/stdc++.h>
using namespace std;
int l,go=0,reall=0;
int main(){
	scanf("%d",&l);
	for(int i=2;i<l;i++){
		for(int j=2;j<=sqrt(i);j++){
			if(i%j!=0){
				printf("%d\n",i);
				reall+=i;
				go++;
			}
		}
		if(reall>l) break;
	}
	printf("%d",go);
	return 0;
}

