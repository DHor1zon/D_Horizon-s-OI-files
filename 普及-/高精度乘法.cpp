#include <bits/stdc++.h>
using namespace std;
int a [2086], b [2086], c [2086];
int lenA, lenB, lenC;
int main ()
{
	string ca, cb;
	cin >> ca >> cb;
	lenA = ca.size ();
	lenB = cb.size ();
	for (int i = 0; i < lenA; ++ i)
		a [lenA - i - 1] = ca [i] - '0';
	for (int i = 0; i < lenB; ++ i)
		b [lenB - i - 1] = cb [i] - '0';
	for (int i = 1; i <= lenB; ++ i)
		for (int j = 1; j <= lenA; ++ j)
			c [i + j - 1] += a [j] * b [i];
	lenC = lenA + lenB;
	for (int i = lenC - 1; i >= 0; -- i)
		printf ("%d ", c [i]);
	for (lenC = 1; c [lenC] > 0; ++ lenC)
		if (c [lenC] >= 10)
		{
			c [lenC + 1] += c [lenC] / 10;
			c [lenC] %= 10;
		}
	for (int i = lenC - 1; i >= 0; -- i)
		printf ("%d", c [i]);
	return 0;
}

