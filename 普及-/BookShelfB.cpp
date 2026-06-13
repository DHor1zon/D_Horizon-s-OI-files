#include <bits/stdc++.h>

const int N = 2 * 1e4 + 100;

int h [N];
int s, b;
int n;

bool cmp (int x, int y)
{
	return x > y;
}

int main ()
{
	std::cin >> n >> b;
	for (int i = 1; i <= n; ++ i)
		std::cin >> h [i];
	std::sort (h + 1, h + n + 1, cmp);
	
	//for (int i = 1; i <= n; ++ i)
	//	printf ("%d ", h [i]);
	//printf ("\n");
	
	int i;
	for (i = 1; s < b; ++ i)
		s += h [i];
	printf ("%d", -- i);
	return 0;
}

/*int total = 0;
for (int i = 1; i <= n; ++ i)
	total += a [i];*/
