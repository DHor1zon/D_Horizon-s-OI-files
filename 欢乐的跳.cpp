#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n; int nums [1002]; int cha [1002];
	std::scanf ("%d", &n);
	std::scanf ("%d", &nums [1]);
	for (int i = 2; i <= n; ++ i)
	{
		std::scanf ("%d", &nums [i]);
		cha [i - 1] = abs (nums [i] - nums [i - 1]);
		
	}
	sort (cha + 1, cha + n);
	for (int i = 1; i < n; ++ i)
		printf ("%d ", cha [i]);
	for (int i = 1; i < n - 1; ++ i)
		if ((cha [i + 1] - cha [i]) != 1)
		{
			printf ("Not jolly");
			return 0;
		}
	std::printf ("Jolly");
	return 0;
}

