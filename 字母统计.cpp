#include <bits/stdc++.h>
using namespace std;
bool bigLetPan (char a)
{
	return a >= 'A' && a <= 'Z' ? 1 : 0;
}
bool smallLetPan (char a)
{
	return a >= 'a' && a <= 'z' ? 1 : 0;
}
bool numPan (char a)
{
	return a >= '0' && a <= '9' ? 1 : 0;
}

typedef bool (*f) (char a);

int main ()
{
	int len; std::string s;
	int ans [5] = {0, 0, 0, 0, 0}; //bigLet, smallLet, num, others, len;
	f a [3] = {bigLetPan, smallLetPan, numPan};
	char *p;
	getline (cin, s);
	len = s.size ();
	ans [4] = len;
	for (p = &s [0]; p < &s [0] + len; ++ p)
	{
		for (int i = 0; i < 3; ++ i)
			if (a [i] (*p))
				++ ans [i];
	}
	ans [3] = ans [4] - (ans [0] + ans [1] + ans [2]);
	for (int i = 0; i < 5; ++ i)
	    printf ("%d ", ans [i]);
	return 0;
}

