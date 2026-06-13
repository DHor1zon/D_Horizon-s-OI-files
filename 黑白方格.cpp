#include <bits/stdc++.h>

bool map [102] [103];
int n, m, t;

bool mb [4] [4] = {{0}, {0, 1, 1, 0}, {0, 1, 1, 0}, {0}};

void scan (std::string s)
{
	char c;
	scanf ("%d %d", &n, &m);
	for (int i = 1; i <= n; ++ i)
		for (int j = 1; j <= m; ++ j)
		{
			std::cin >> c;
			map [i] [j] = c - '0';
		}
}

bool check (int x, int y)
{
	for (int i = 0; i < 4; ++ i)
		for (int j = 0; j < 4; ++ j)
			if (map [x + i] [y + j] != mb [i] [j])
				return 0;
	return 1;
			
}

void AI (std::string s)
{
	scanf ("%d", &t);
	for (int d = 1; d <= t; ++ d)
	{
		scan ("GIVE ME SCAN!!!!!"); bool flag = 0;
		for (int i = 1; i <= n - 3; ++ i)
			for (int j = 1; j <= m - 3; ++ j)
				if (check (i, j))
				{
					printf ("Yes\n");
					flag = 1;
				}
		if (!flag) printf ("No\n");
	}
}

int main ()
{
	AI ("luogu, B4040, ¶®£¿");
	return 0;
}

