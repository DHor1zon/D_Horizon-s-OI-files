#include <bits/stdc++.h>

int stu [102]; int n, m; int ming; int ansx, ansy;

bool cmp (int x, int y)
{
    return x > y;
}

int main ()
{
    scanf ("%d %d", &n, &m);
    scanf ("%d", &stu [1]);
    ming = stu [1];
    for (int i = 2; i <= n * m; ++ i)
        scanf ("%d", &stu [i]);
    std::sort (stu + 1, stu + n * m + 1, cmp);
    for (int i = 1; i <= n * m; ++ i)
        if (stu [i] == ming) 
        {
            ming = i;
            break;
        }
    //printf ("%d.....", ming);
    ansx = (ming - 1) / n + 1;
    if (ansx & 1) ansy = (ming - 1) % n + 1;
    else ansy = n - (ming - 1) % n;
    printf ("%d %d", ansx, ansy);
    return 0;
}