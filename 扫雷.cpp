#include <bits/stdc++.h>
char boom [102] [102]; int n, m; char bns [102] [102];
int boop (int x, int y)
{
	int ans = 0;
	int dx [8] = {1, 0, -1, 0, 1, 1, -1, -1};
	int dy [8] = {0, 1, 0, -1, 1, -1, 1, -1};
	//std::cout << x << ' ' << y << ' ';
	for (int i = 0; i < 8; ++ i)
		if ((boom [x + dx [i]][y + dy [i]] == '*')&&(x + dx [i] > 0 && x + dx [i] <= n)&&(y + dy [i] > 0 && y + dy [i] <= m))
			ans ++;
	//std::cout << ans << std::endl;
	return ans;
}
int main ()
{
	std::scanf ("%d %d", &n, &m);
	for (int i = 1; i <= n; ++ i)
		for (int j = 1; j <= m; ++ j)
			std::cin >> boom [i] [j];
		/*	
	for (int i = 1; i <= n; ++ i)
	{
		for (int j = 1; j <= m; ++ j)
			std::printf ("%c", boom [i] [j]);
		std::printf ("\n");
	}*/
	for (int i = 1; i <= n; ++ i)
		for (int j = 1; j <= m; ++ j)
		{
			if (boom [i] [j] == '*')
				boom [i] [j] = '*';
			else
				boom [i] [j] = boop (i, j) + '0';
		}
	for (int i = 1; i <= n; ++ i)
	{
		for (int j = 1; j <= m; ++ j)
			std::printf ("%c", boom [i] [j]);
		printf ("\n");
	}
			
	return 0;
}

