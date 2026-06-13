#include <iostream>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, x, y, p, q;
    int ans = 0;
    cin >> n;
    for (int i = 1; i <= n; ++ i)
    {
        ans = 0;
        cin >> x >> y >> p >> q;
        int sx, sy;
        sx = x; sy = y;
        bool ct = 0;
        while (1)
        {
            if (ct == 0)
                x = (x + y) % 10;
            if (ct == 1)
                y = (y + x) % 10;
            ct = ct == 1 ? 0 : 1;
            ans ++;
            //cout << '$' << x << ',' << y << "$\n";
            if (x == p && y == q)
                break;
            if (ans > 100)
            {
                ans = -1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}