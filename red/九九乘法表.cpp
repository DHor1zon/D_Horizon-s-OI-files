//¾Å¾Å³Ë·¨±í
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int i,j;
  for(i=1;i<=9;i++)
  {
  	for (j = i; j <= 9; j ++)
  		printf ("%d*%d=%d ",i, j, i * j);
  	printf ("\n");
  }
  system("pause");
  return 0;  
}
