#include <iostream>
using namespace std;
char m [4] [4];
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for (int i = 1; i <= 3; ++ i)
        for (int j = 1; j <= 3; ++ j)
            cin >> m [i] [j];
    for (int i = 1; i <= 3; ++ i)
    {
        for (int j = 1; j <= 3; ++ j)
        {
            if (m [i] [j] == 'X' && m [i - 1] [j] == 'X' && m [i + 1] [j] == '#')
            {
                cout << j << ',' << i + 1;
                return 0;
            }
            if (m [i] [j] == 'X' && m [i + 1] [j] == 'X' && m [i - 1] [j] == '#')
            {
                cout << j << ',' << i - 1;
                return 0;
            }
            if (m [i] [j] == 'X' && m [i] [j - 1] == 'X' && m [i] [j + 1] == '#')
            {
                cout << j + 1 << ',' << i;
                return 0;
            }
            if (m [i] [j] == 'X' && m [i] [j + 1] == 'X' && m [i] [j - 1] == '#')
            {
                cout << j - 1 << ',' << i;
                return 0;
            }
            if (m [i] [j] == 'X' && m [i - 1] [j - 1] == 'X' && m [i + 1] [j + 1] == '#')
            {
                cout << j + 1 << ',' << i + 1;
                return 0;
            }
            if (m [i] [j] == 'X' && m [i + 1] [j + 1] == 'X' && m [i - 1] [j - 1] == '#')
            {
                cout << j - 1 << ',' << i - 1;
                return 0;
            }
            if (m [i] [j] == 'X' && m [i - 1] [j + 1] == 'X' && m [i + 1] [j - 1] == '#')
            {
                cout << j - 1 << ',' << i + 1;
                return 0;
            }
            if (m [i] [j] == 'X' && m [i + 1] [j - 1] == 'X' && m [i - 1] [j + 1] == '#')
            {
                cout << j + 1 << ',' << i - 1;
                return 0;
            }
            if (m [i] [j] == 'X' && i - 2 >= 0 && m [i - 2] [j] == 'X' && m [i - 1] [j] == '#')
            {
                cout << j << ',' << i - 1;
                return 0;
            }
            if (m [i] [j] == 'X' && i + 2 <= 4 && m [i + 2] [j] == 'X' && m [i + 1] [j] == '#')
            {
                cout << j << ',' << i + 1;
                return 0;
            }
            if (m [i] [j] == 'X' && j - 2 >= 0 && m [i] [j - 2] == 'X' && m [i] [j - 1] == '#')
            {
                cout << j - 1 << ',' << i;
                return 0;
            }
            if (m [i] [j] == 'X' && j + 2 <= 4 && m [i] [j + 2] == 'X' && m [i] [j + 1] == '#')
            {
                cout << j + 1 << ',' << i;
                return 0;
            }
            if (m [i] [j] == 'X' && i - 2 >= 0 && j - 2 >= 0 && m [i - 2] [j - 2] == 'X' && m [i - 1] [j - 1] == '#')
            {
                cout << j - 1 << ',' << i - 1;
                return 0;
            }
            if (m [i] [j] == 'X' && i + 2 <= 4 && j + 2 <= 4 && m [i + 2] [j + 2] == 'X' && m [i + 1] [j + 1] == '#')
            {
                cout << j + 1 << ',' << i + 1;
                return 0;
            }
            if (m [i] [j] == 'X' && i - 2 >= 0 && j + 2 <= 4 && m [i - 2] [j + 2] == 'X' && m [i - 1] [j + 1] == '#')
            {
                cout << j + 1 << ',' << i - 1;
                return 0;
            }
            if (m [i] [j] == 'X' && i + 2 <= 4 && j - 2 >= 0 && m [i + 2] [j - 2] == 'X' && m [i + 1] [j - 1] == '#')
            {
                cout << j - 1<< ',' << i + 1;
                return 0;
            }
        }
    }
    return 0;
}