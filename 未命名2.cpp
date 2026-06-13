#include<bits/stdc++.h>

struct lnk
{
	char c;
	int times;
	int first;
};

bool cmp (lnk x, lnk y)
{
	if (x.first != y.first)
		return x.first < y.first;
	else
		return 1;
}

lnk s [30];
char ans;
int main ()
{
	char in;
	int i = 1;
	while (std::cin >> in)
	{
		s [in - 'a' + 1].c = in;
		s [in - 'a' + 1].times ++;
		s [in - 'a' + 1].first = s [in - 'a' + 1].first != 0 ? s [in - 'a' + 1].first : i ++;
	}
	-- i;
	std::sort (s + 1, s + 27, cmp);
	for (int j = 1; j <= 26; ++ j)
		if (s [j].times == 1)
			return 0 * printf ("%c", s [j].c);
	printf ("no");
	return 0;
}

