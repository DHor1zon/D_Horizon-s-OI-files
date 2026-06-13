#include<bits/stdc++.h>
using namespace std;

int main ()
{
	unsigned long long m, n, q1, q2; cin>>m>>n;
	q1 = (m + n) % 7;
	if(q1 == 0) q1 = 7;
	q2 = n / 7;
	cout<<q1<<endl<<q2;
	return 0;
}
