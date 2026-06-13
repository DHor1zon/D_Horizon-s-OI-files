#include <bits/stdc++.h>
char map [101] [101];
bool hash [101] [101];
int n, m;
std::string flag = "No";
int dx [4] = {-1, 1, 0, 0};
int dy [4] = {0, 0, -1, 1};
void scan (int n, int m)
{
	for (int i = 1; i <= n; ++ i)
		for (int j = 1; j <= m; ++ j)
			std::cin >> map [i] [j];
}
bool pan (int x, int y)
{
	return ((x <= n) && (y <= m) && (x >= 1) && (y >= 1) && (!hash [x] [y]) && (map [x] [y] == '.'));
}
void dfs (int x, int y)
{
	if (x == n && y == m)
	{
		//std::cout << "find it out\n";
		flag = "Yes";
		return;
		exit (0);
	}
	for (int i = 0; i < 4; ++ i)
	{
		//std::cout << i << std::endl;
		int nx = x + dx [i];
		int ny = y + dy [i];
		if (pan (nx, ny))
		{
			hash [nx] [ny] = 1;
			dfs (nx, ny);
		}
	}
	//std::cout << "dfs over\n";
	return;
}
int main ()
{
	std::scanf ("%d %d", &n, &m);
	scan (n, m);
	dfs (1, 1);
	std::cout << flag;
	return 0;
}

