#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string sa, sb;
    long long a = 1,  b = 1;
    cin >> sa >> sb;
    for (int i = 0; i < sa.size (); i++)
        a *= (sa [i] - 'A' + 1);
    for (int i = 0; i < sb.size (); i++)
        b *= (sb [i] - 'A' + 1);
    if (a % 47 == b % 47)
        cout << "GO" << endl;
    else
        cout << "STAY" << endl;
    return 0;
}