#include<bits/stdc++.h>
using namespace std;
int in[101],i,j,temp;
const int n=3;
int main(){
	for(int i=1;i<=n;i++) cin>>in[i];
	for(i=1;i<n;i++){
		bool flag=true;
		for(j=1;j<=n-i;j++)
			if(in[j]>in[j+1]){
				temp=in[j];
				in[j]=in[j+1];
				in[j+1]=temp;
				flag=false;
			}
		if(flag) break;
	}
	for(i=1;i<n;i++) cout<<in[i]<<" ";
	cout<<in[n]<<endl;
	return 0;
}
