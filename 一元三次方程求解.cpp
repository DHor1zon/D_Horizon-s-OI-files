#include <bits/stdc++.h>

double a, b, c, d;
int total;

double f (double q)
{
	return a * q * q * q + b * q * q + c * q + d;
}

int main ()
{
	std::cin >> a >> b >> c >> d;
	//std::cout << a << b << c << d;
	for (double i = -100; i < 100; ++ i)
	{
		double x1 = f (i);
		double x2 = f (i + 1);
		if (x1 == 0)
		{
			printf ("%.2lf ", i);
			++ total;
		}
		if (x1 * x2 < 0)
		{
			double left = i, right = i + 1;
			while (right - left >= 0.001)
			{
				double mid = (left + right) / 2.0;
				if (f (mid) * f (right) <= 0)
					left = mid;
				else
					right = mid;
			}
			printf ("%.2lf ", right);
			++ total;
		}
	}
	return 0;
}

