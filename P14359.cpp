#include <bits/stdc++.h>

const int N = 5 * 1e5 + 86;
const long long M = 5 * 1e6 + 86;
int ind [N];
int bullet [M];
int n, k, ans; int lastr;

int main ()
{
    scanf ("%d %d", &n, &k);
    for (int i = 1; i <= n; ++ i)
    {
        int tmp; scanf ("%d", &tmp);
        ind [i] = tmp ^ ind [i - 1];
    }
    memset (bullet, -1, sizeof (bullet));
    bullet [0] = 0;
    for (int i = 1; i <= n; ++ i)
    {
        int a = ind [i] ^ k;
        if (bullet [a] >= lastr)
        {
            ++ ans;
            lastr = i;
        }
        bullet [ind [i]] = i;
    }
    printf ("%d", ans);
    return 0;
}