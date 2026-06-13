//x2-5-6
#include<bits/stdc++.h>
using namespace std;
char s1[20]; char s2[20]; int st1=0,st2=0;
int main(){
	gets(s1);
	strcpy(s2,s1);
	for(int i=0;i<strlen(s1);i++){
		s2[i]=s1[strlen(s1)-1-i];
	}
	stringstream geek(s1);
	geek>>st1;
	stringstream geek2(s2);
	geek2>>st2;
	if(st1<st2){
		cout<<st2-st1;
	}else{
		cout<<st1-st2;
	}
	return 0;
}
