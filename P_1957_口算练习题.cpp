#include <bits/stdc++.h>
using namespace std;
bool letp (int c)
{
    return (c >= 'a' && c <= 'z') ? 1 : 0;
}
int zhuan (string s)
{
    int out = 0;
    for (int i = 0; i < s.size (); ++ i)
        out = out * 10 + s [s.size () - i - 1] - '0';
    return out;
}
int main ()
{
    int n; cin >> n;
    for (int i = 1; i <= n; ++ i)
    {
        char suan;
        string a; int b, c;
        cin >> a >> b;
        int sa, sb;
        if (letp (a [0]))
        {
            cin >> c;
            if (a [0] == 'a')
                suan = 'a';
            if (a [0] == 'b')
                suan = 'b';
            if (a [0] == 'c')
                suan = 'c';
            sa = b; sb = c;
        }
        else
        {
            int l = zhuan (a);
            sa = l; sb = b;
        }
        cout << 1;
    }
    return 0;
}