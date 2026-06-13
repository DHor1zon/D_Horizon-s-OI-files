#include <bits/stdc++.h>

const int N = 1e5 + 5;

struct DH
{
	int place;
	int num;
};

DH balls [N];
int n, q;

bool cmp (DH x, DH y)
{
	return x.num < y.num;
}

int find (int a)
{
	int left = 1, right = n, mid, ans = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (balls [mid].num == a)
		{
			ans = balls [mid].place;
			break;
		}
		else if (balls [mid].num < a)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return ans;
}

int main ()
{
	scanf ("%d", &n);
	for (int i = 1; i <= n; ++ i)
		scanf ("%d", &balls [i + (balls [i].place = i) * 0].num);
	std::sort (balls + 1, balls + n + 1, cmp);
	scanf ("%d", &q);
	for (int i = 1; i <= q; ++ i)
	{
		int qi;
		scanf ("%d", &qi);
		printf ("%d\n", find (qi));
	}
	return 0;
}
