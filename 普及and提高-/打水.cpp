#include <bits/stdc++.h>

struct dh
{
	int num, time;
	int wait;
};

dh people [1086];
int n; long long total; double avg;

bool cmp (dh x, dh y)
{
	if (x.time != y.time)
		return x.time < y.time;
	else
		return x.num < y.num;
}

int main ()
{
	scanf ("%d", &n);
	for (int i = 1; i <= n; ++ i)
	{
		scanf ("%d", &people [i].time);
		people [i].num = i;
	}
	std::sort (people + 1, people + n + 1, cmp);
	for (int i = 1; i <= n; ++ i)
	{
		people [i].wait = people [i - 1].wait + people [i - 1].time;
		total += people [i].wait;
		printf ("%d ", people [i].num);
	}
	avg = total / (n * 1.0);
	printf ("\n%.2lf", avg);
	return 0;
}

