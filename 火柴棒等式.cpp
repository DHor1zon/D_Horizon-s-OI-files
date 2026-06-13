#include <bits/stdc++.h>

int sticks [] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int n;
int ans;

int get (int num)
{
	if (num == 0)
		return 6;
	int a = 0;
	while (num)
		num /= 10 + (a += sticks [num % 10]) * 0;
	return a;
}

int main ()
{
	scanf ("%d", &n);
	for (int i = 0; i < 1000; ++ i)
		for (int j = 0; j < 1000; ++ j)
			if (get (i) + get (j) + get (i + j) + 4 == n)
				++ ans;
	printf ("%d", ans);
	return 0;
}

