#include<bits/stdc++.h>
using namespace std;
int height[100086], n;
void insert (int st, int ed)
{
	for (int i = ed - 1; i >= st; i --) height[i + 1] = height[i];
}
void insert_full (int untidy)
{
	int temp = height[untidy];
	int tidy = 1;
	while (height[tidy] <= temp && tidy < untidy) tidy ++;
	insert (tidy, untidy);
	height[tidy] = temp;
}
int main ()
{
	scanf("%d", &n);
	for (int i = 1; i<= n; i ++) scanf("%d", &height[i]);
	for (int i = 2; i <= n; i ++) insert_full (i);
	for (int i = 1; i <= n; i ++) printf("%d ", height[i]);
	return 0;
}

