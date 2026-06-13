#include<bits/stdc++.h>
using namespace std;
int a,b,c,temp;
int main(){
	scanf("%d %d %d",&a,&b,&c);
	if(a+b<=c||a+c<=b||b+c<=a) printf("Not triangle");
	else{
		switch(((a>b)&&(a>c))*2+((b>c)&&(b>a))*3+((c>a)&&(c>b))*5){
			case 2: break;
			case 3: {
				temp=b;
				b=a;
				a=temp;
				break;
			}
			case 5:{
				temp=c;
				c=a;
				a=temp;
				break;
			}
		}
		switch((b*b+c*c>a*a)*2+(b*b+c*c==a*a)*3+(b*b+c*c<a*a)*5){
			case 2:printf("Acute triangle"); break;
			case 3:printf("Right triangle"); break;
			case 5:printf("Obtuse triangle"); break;
		}
		switch((a==b||b==c||c==a)*2+(a==b&&a==c&&c==a)){
			case 3:printf("\nIsosceles triangle\nEquilateral triangle"); break;
			case 2:printf("\nIsosceles triangle"); break;
			case 1:printf("\nEquilateral triangle"); break;
			
		}
	}
	return 0;
}
