#include<bits/stdc++.h>
using namespace std;
int nums[10086];
int find_mid (int n, int x)
{
	int left = 0, right = n - 1;
	int find = n;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (nums[mid] == x) {find = mid; break;}
		if (x < nums[mid]) right = mid - 1;
		if (nums[mid] < x) left = mid + 1;
	}
	if (find != n) return find;
	else return 0;
}

int main ()
{
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &nums[i]);
	int win; scanf("%d", &win);
	printf("%d", find_mid(n,win));
	return 0;
}

