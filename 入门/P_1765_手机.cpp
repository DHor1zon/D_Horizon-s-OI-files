#include <bits/stdc++.h>
using namespace std;
string lets = "abcdefghijklmnopqrstuvwxyz ";
string nums = "123123123123123123412312341";
int main ()
{
    string s; int ans = 0;
    getline (cin, s);
    for (int i = 0; i < s.size (); ++ i)
    {
        char a = s [i];
        ans += nums [lets.find (a)] - '0';
    }
    cout << ans;
    return 0;
}