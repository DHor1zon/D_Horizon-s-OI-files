#include <bits/stdc++.h>


std::string map1 [] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
std::string map2 [] = {"", "a", "both", "another", "first", "second", "third"};
int map2o [] = {0, 1, 4, 1, 1, 4, 9};
int key [7];
long long ans; int egn;

int main ()
{
	for (int i = 1; i <= 6; ++ i)
	{
		std::string tmp;
		std::cin >> tmp;
		for (int i = 1; i <= 20; ++ i)
			if (map1 [i] == tmp)
				key [++ egn] = i * i % 100;
		for (int i = 1; i <= 6; ++ i)
			if (map2 [i] == tmp)
				key [++ egn] = map2o [i];
	}
	std::sort (key + 1, key + egn + 1);
	for (int i = 1; i <= egn; ++ i)
		printf ("%d ", key [i]);
	printf ("\n");
	for (int i = 1; i <= egn; ++ i)
		ans = ans * 100 + key [i];
	printf ("%lld", ans);
	return 0;
}

