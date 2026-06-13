#include <bits/stdc++.h>

std::string s;
int ans; long long n, l;

int main ()
{
	std::cin >> s;
	std::cin >> n;
	l = s.size ();
	int i = l;
	while (i < n)
		i <<= 1;
	while (i - l)
	{
		i >>= 1;
		if (n == i + 1)
			-- n;
		else if (n > i)
			n -= i + 1;
	}
	printf ("%c", s [n - 1]);
	return 0;
}

