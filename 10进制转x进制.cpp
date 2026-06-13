#include <bits/stdc++.h>
using namespace std;
int main ()
{
	string s; int x; int Ns = 0;
	cin >> s >> x;
	for (int i = 0; i < s.size (); ++ i)
		Ns = Ns * 10 + s [i] - '0';
	int ans [10086]; int y; int i;
	for (i = 1; Ns; ++ i)//strlen (shuZuMing)
	{
		y = Ns % x;
		Ns /= x;
		ans [i] = y;
		//printf ("%d ", y);
	}
	
	//for (int j = 1; j <= i; ++ j)
	//	printf ("%d ", ans [i]);
	//cout << endl;
	//cout << char (11 - 10 + 'A');
	bool flag = 0;
	for (; i > 0; -- i)
	{
		if (ans [i] >= 10)
			cout << char (ans [i] - 10 + 'A');
		else if (ans [i] != 0 || flag)
		{
			flag = 1;
			cout << ans [i];
		}
	}
	return 0;
}

