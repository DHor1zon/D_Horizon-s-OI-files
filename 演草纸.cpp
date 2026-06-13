#include<iostream>
using namespace std;
int n,flag=1,ans1=0,ans2=0,pos=0,a[1010],b[1010];
int main()
{
cin>>n;
for(int i=1;i<=n;i++) cin>>a[i];
for(int i=1;i<=n;i++) cin>>b[i];
for(int i=1;i<n;i++) if(a[i]>a[i+1]) flag=0;
for(int i=1;i<n;i++) if(b[i]>b[i+1]) flag=0;
if(!flag)
{
cout<<"invaid data";
return 0;
}
for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++)
if(a[i]>b[j]) ans1++;
cout<<ans1<<endl;
for(int i=1;i<=n;i++)
{
while(pos<n&&b[pos+1]<a[i]) pos++;
ans2+=pos;
}
cout<<ans2<<endl;
return 0;
}
