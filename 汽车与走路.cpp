#include<bits/stdc++.h>
using namespace std;
int m; double foot,bike;
int main(){
	scanf("%d",&m);
	foot=m/1.2;
	bike=27+23+m/3.0;
	if(foot>bike) printf("Bike");
	else if(foot<bike) printf("Walk");
	else printf("All");
	return 0;
}
