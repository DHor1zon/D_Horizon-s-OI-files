#include <bits/stdc++.h>
using namespace std;
int n, k; int x [22];
bool ppan (int a)
{
    if (a == 1) return 0;
    if (a == 2) return 1;
    if (a % 2 == 0) return 0;
    for (int i = 3; i <= sqrt (a); ++ i)
        if (a % i == 0)
            return 0;
    return 1;
}
void fin (int a, int n, int s)
{
}
int main ()
{
    scanf ("%d%d", &n, &k);
    for (int i = 1; i <= n; ++ i)
        scanf ("%d", &x [i]);
    return 0;
}