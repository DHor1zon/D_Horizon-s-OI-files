#include<bits/stdc++.h>
using namespace std;
char s[30];
int main(){
	gets(s);
	for(int i=0;i<strlen(s);i++){
		s[i]=s[i]+4;
	}
	puts(s);
	return 0;
}
