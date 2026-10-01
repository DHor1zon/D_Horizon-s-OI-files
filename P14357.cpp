#include <bits/stdc++.h>

int nums [1000086];
std::string s;

int main ()
{
    std::cin >> s;
    int l = 0;
    for (int i = 0; i < s.size (); ++ i)
        if (s [i] >= '0' && s [i] <= '9')
            nums [++ l] = s [i] - '0';
    std::sort (nums + 1, nums + l + 1);
    for (int i = l; i >= 1; -- i)
        printf ("%d", nums [i]);
    return 0;
}