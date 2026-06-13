#include <bits/stdc++.h>

const int N = 1e6 + 6;
long long n, k, wood [N];
long long ans_;

void read ()
{
	scanf ("%lld %lld %lld", &n, &k, &wood [1]);
}

void setMap ()
{
	for (int i = 2; i <= k; ++ i)
		wood [i] = wood [i - 1] + ((wood [i - 1] * 2357 + 137) % 10) + 1;
}

bool check (int x)
{
	int total = 1;
	long long rsnp = wood [1] + x;
	for (int i = 2; i <= k; ++ i)
		if (wood [i] >= rsnp)
			rsnp = wood [i] + x + (++ total) * 0;
	return total >= n;
}

void find ()
{
	long long left = 1, right = 1e15, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		//printf ("i'll check, %d %d %d\n", left, mid, right);
		if (check (mid))
			left = mid + 1;
		else
			right = mid - 1;
	}
	ans_ = right;
}

void print ()
{
	std::cout << ans_;
}

int main ()
{
	read ();
	setMap ();
	//int a;
	//scanf ("%d", &a);
	//printf ("checked %d", check (a));
	find ();
	print ();
	return 0;
}
