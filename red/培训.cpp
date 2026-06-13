#include <bits/stdc++.h>
using namespace std;
struct lnk
{
	string name;
	int age, fen;
};
lnk stu [186];
int main ()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++ i)
		cin >> stu [i].name >> stu [i].age >> stu [i].fen;
	for (int i = 1; i <= n; ++ i)
	{
		stu [i].age ++;
		stu [i].fen = stu [i].fen * 1.2 > 600 ? 600 : stu [i].fen * 1.2;
		cout << stu [i].name << ' ' << stu [i].age << ' ' << stu [i].fen << endl;
	}
	return 0;
}

