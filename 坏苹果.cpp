#include<bits/stdc++.h>
using namespace std;
int a;
string s="apple";
int main(){
	scanf("%d",&a);
	if(a>1) s="apples";
	printf("Today, I ate %d %s.",a,s.c_str());
	return 0;
}
