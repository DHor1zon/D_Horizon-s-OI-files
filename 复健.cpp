#include<bits/stdc++.h>

char cin;
int score11 [6000] [3], score21 [6000] [3];
int i11, i21;

void debug ()
{
	//if (!(score11 [i11] [1] || score11 [i11] [2]) && i11 > 1)
	//	-- i11;
	//if (!(score21 [i21] [1] || score21 [i21] [2]) && i21 > 1)
	//	-- i21;	
	
	//printf ("%d %d, %d %d", score11 [1] [1], score11 [1] [2], score21 [1] [1], score21 [1] [2]);
	for (int i = 1; i <= i11; ++ i)
		printf ("%d:%d\n", score11 [i] [1], score11 [i] [2]);
	printf ("\n");
	for (int i = 1; i <= i21; ++ i)
		printf ("%d:%d\n", score21 [i] [1], score21 [i] [2]);
	//printf ("i11 = %d, i21 = %d, debug is over\n", i11, i21);
}

void clear ()
{
	int cha = score11 [i11] [1] - score11 [i11] [2];
	int hca = score21 [i21] [1] - score21 [i21] [2];
	//printf ("chas:%d %d\n", cha, hca);
	if (std::abs (cha) >= 2 && std::max (score11 [i11] [1], score11 [i11] [2]) >= 11)
		++ i11;//debug();
	if (std::abs (hca) >= 2 && std::max (score21 [i21] [1], score21 [i21] [2]) >= 21)
		++ i21;//debug();
}

int main ()
{
	i11 = 1, i21 = 1;
	while (cin != 'E')
	{
		std::cin >> cin;
		if (cin == 'W')
			++ score11 [i11] [1], ++ score21 [i21] [1];
		if (cin == 'L')
			++ score11 [i11] [2], ++ score21 [i21] [2];
		//if (cin == 'D')
		//	debug ();
		clear ();
	}
	debug ();
	return 0;
}

//			if (score11 [i11] [1] - score11 [i11] [2] >= 2 && score11 [i11] [1] >= 11)
//				++ i11, ++ W_T;
//			else if (score11 [i11] [2] - score11 [i11] [1] >= 2 && score11 [i11] [2] >= 11
//				++ i11, ++ L_T;
