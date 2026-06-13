#include <bits/stdc++.h>
using namespace std;
int nums [27];
int main ()
{
    string s;
    for (int i = 1; i <= 4; ++ i)
    {
        getline (cin, s);
        for (int i = 0; i < s.size (); ++ i)
            if ('A' <= s [i] && s [i] <= 'Z')
                nums [s [i] - 'A' + 1] += 1;;
    }
    int maxx = 0;
    for (int i = 1; i <= 26; ++ i)
        if (nums [i] > maxx)
            maxx = nums [i];
    for (int i = maxx; i >= 1; -- i)
    {
        for (int j = 1; j < 26; ++ j)
            if (nums [j] >= i)
                printf ("* ");
            else
                printf ("  ");
        if (nums [26] >= i)
                printf ("* ");
            else
                printf ("  ");
        printf ("\n");
    }
    printf ("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n");
    return 0;
}
/* an e.g.:
THE QUICK BROWN FOX JUMPED OVER THE LAZY DOG.
THIS IS AN EXAMPLE TO TEST FOR YOUR
HISTOGRAM PROGRAM.
HELLO!

TO:

                            *
                            *
        *                   *
        *                   *     *   *
        *                   *     *   *
*       *     *             *     *   *
*       *     * *     * *   *     * * *
*       *   * * *     * *   * *   * * * *
*     * * * * * *     * * * * *   * * * *     * *
* * * * * * * * * * * * * * * * * * * * * * * * * *
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
*/