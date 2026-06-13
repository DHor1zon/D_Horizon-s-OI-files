#include <bits/stdc++.h>
using namespace std;
string s;
int main ()
{
	cin >>s;
	for (int i = 0; i < s.size(); ++ i)
	{
		if (s [i] < '0' || s [i] > '9')
		{
			if (s [i + 1] < '0' || s [i + 1] > '9')
			{
				cout <<s [i];
				continue;
			}
			for (int j = 1; j <= s [i + 1] - '0'; ++ j)
				cout <<s [i];
		}
	}
	return 0;
}

