#include <bits/stdc++.h>
using namespace std;
int surNum [88], n, surType [88];
bool surPan (int a)
{
	for (int i = 1; i <= 7; i ++)
		if (surNum [i] == a) return 1;
	return 0;
}
int main ()
{
	scanf ("%d", &n);
	for (int i = 1; i <= 7; i ++)
		scanf ("%d", &surNum [i]);
	for (int i = 1; i <= n; i ++)
	{
		int surty = 0;
		for (int j = 1; j <= 7; j ++)
		{
			int a; cin >>a;
			//cout << surPan (a) <<' ';
			if (surPan (a)) surty ++;
		}
		//cout<<endl <<surty<< endl ;
		switch (surty)
		{
			case 7 : surType [1] ++; break;
			case 6 : surType [2] ++; break;
			case 5 : surType [3] ++; break;
			case 4 : surType [4] ++; break;
			case 3 : surType [5] ++; break;
			case 2 : surType [6] ++; break;
			case 1 : surType [7] ++; break;
		}
	}
	//cout<<endl;
	for (int i = 1; i <= 7; i ++)
		printf ("%d ", surType [i]);
	return 0;
}

