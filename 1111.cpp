#include <bits/stdc++.h>
using namespace std;
const float a = 1.235;
void plan1 ()
{
	printf ("%.2f\n", a);
}
void plan2 ()
{
	cout <<fixed <<setprecision (2) <<a <<endl;
}
int main ()
{
	plan1 ();
	plan2 ();
	return 0;
}

