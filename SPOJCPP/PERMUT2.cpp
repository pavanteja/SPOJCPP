#include "stdafx.h"
#include <iostream>
using namespace std;
int PERMUT2()
{

	int n, c = 0;
	cin >> n;
	int permutation[100000];
	int Ipermutation[100000];
	while (c < n)
	{
		cin >> permutation[c];
		Ipermutation[permutation[c] - 1] = c + 1;
		c++;
		if (c == n)
		{
			for (int i = 0;i < n;i++)
			{
				if (permutation[i] != Ipermutation[i])
				{
					cout << "not ambiguous" << endl;
					break;
				}
				if (i + 1 == n)
				{
					cout << "ambiguous" << endl;
				}
				//cout << permutation[i] << "\t" << Ipermutation[i] << endl;
			}
			cin >> n;
			c = 0;
		}
	}
	return 0;
}