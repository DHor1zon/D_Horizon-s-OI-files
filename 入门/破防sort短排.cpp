#include<bits/stdc++.h>
using namespace std;
int height[100086];
int main ()
{
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; i ++) scanf("%d", &height[i]);
	sort (height, height + n + 1);
	for (int i = 1; i <= n; i ++) printf("%d ", height[i]);
	return 0;
}
