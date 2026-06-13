#include <bits/stdc++.h>

char map [105] [105];
char app [105] [105];
int n;
int dx [] = {1, 1, 1, 0, -1, -1, -1, 0};
int dy [] = {1, 0, -1, -1, -1, 0, 1, 1};
std::string s = "yizhong";

bool dfs (int x, int y, int dic, int step)
{
	if (step == 6)
	{
		app [x] [y] = 1;
		return 1;
	}
	if (map [x + dx [dic]] [y + dy [dic]] == s [step])
		if (dfs (x + dx [dic], y + dy [dic], dic, step + 1))
		{
			app [x] [y] = 1;
			return 1;
		}
	return 0;
}

int main ()
{
	std::cin >> n;
	for (int i = 1; i <= n; ++ i)
		for (int j = 1; j <= n; ++ j)
			std::cin >> map [i] [j];
	for (int i = 1; i <= n; ++ i)
		for (int j = 1; j <= n; ++ j)
			if (map [i] [j] == 'y')
			{
				for (int k = 0; k < 8; ++ k)
					if (map [i + dx [k]] [j + dy [i]] == 'i')
						if (dfs (i + dx [k], j + dy [k], k, 1))
						{
							app [i] [j] = 1;
							std::cout << "find it out!\n";
						}
			}
	for (int i = 1; i <= n; ++ i)
	{
		for (int j = 1; j <= n; ++ j)
			printf ("%c", !app [i] [j] ? '*' : map [i] [j]);
		printf ("\n");
	}
	return 0;
}

