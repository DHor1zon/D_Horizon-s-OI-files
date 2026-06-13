#include <iostream>
using namespace std;
int pow (int a, int n)
{
    int ret = a;
    for (int i = 1; i < n; ++ i)
        ret *= a;
    return ret;
}
int mo (int a)
{
    int w = 0;
    while (a)
    {
        w = w * 10 + a % 10;
        a = a / 10;
    }
    int i = 1; int ret = 0;
    while (w)
    {
        ret += pow (w % 10, i);
        w /= 10;
        ++ i;
    }
    return ret;
}
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    for (int j = 1; j <= t; ++ j)
    {
        int l, r;
        cin >> l >> r;
        if (r < l)
        {
            cout << "orz\n";
            continue;
        }
        int flag = 0;
        for (int i = l; i <= r; ++ i)
        {
            if (i == mo (i))
            {
                cout << i << ' ';
                flag = 1;
            }
        }
        if (!flag)
            cout << "orz\n";
        else
            cout << endl;
    }
    return 0;
}