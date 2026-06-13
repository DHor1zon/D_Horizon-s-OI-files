#include<bits/stdc++.h>
using namespace std;
int height[100086], n;
void choose (int st)
{
	int best = 1000000000, best_num;
	for (int i = st; i <= n; i++)
		if (height[i] < best){best = height[i]; best_num = i;}
	int tmp = height[st];
	height[st] = height[best_num];
	height[best_num] = tmp;
}
int main ()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i ++) scanf("%d", &height[i]);
	for (int i = 1; i <= n - 1; i ++)
		choose(i);
	for (int i = 1; i <= n; i ++) printf("%d ", height[i]);
	return 0;
}

