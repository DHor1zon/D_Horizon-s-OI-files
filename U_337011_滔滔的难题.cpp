#include <iostream>
using namespace std;
long long a [1086];
void bob (int n)
{
    for (int i = 1; i <= n; ++ i)
    {
        bool flag = 1;
        for (int j = 1; j <= n - i; ++ j)
        {
            if (a [j] < a [j + 1])
            {
                long long tmp = a [j];
                a [j] = a [j + 1];
                a [j + 1] = tmp;
                flag = 0;
            }
        }
        if (flag)
            return;
    }
}
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++ i)
        cin >> a [i];
    bob (n);
    //for (int i = 1; i <= n; ++ i)
    //    cout << a [i] << ' ';
    for (int i = 1; i <= m; ++ i)
    {
        int op; int k, x;
        cin >> op;
        if (op == 2)
        {
            cin >> k;
            cout << a [k] << endl;
        }
        if (op == 1)
        {
            cin >> k >> x;
            a [k] = x;
            bob (n);
        }
    }
    return 0;
}