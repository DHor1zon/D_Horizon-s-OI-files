#include <bits/stdc++.h>
using namespace std;
struct monkey {
	int num, next;
};
monkey a [1001];
int main ()
{
	int n, k, count = 0;
	cin >>n >>k;
	for (int i = 1; i < n; ++ i)
		a [i].num = i, a [i].next = i + 1;
	a [n].num = n;
	a [n].next = 1;
	int left = n, oio = k % n ? k % n : n;
	int now = 1, last = n;
	while (left - 1)
	{
		++ count;
		if (count == oio)
		{
			a [last].next = a [now].next;
			-- left;
			count = 0;
			oio = k % left ? k % left : left;
		}
		else last = now;
		now = a [now].next;
	}
	cout <<a [now].num;
	return 0;
}

