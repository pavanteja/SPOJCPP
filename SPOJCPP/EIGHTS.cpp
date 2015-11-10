#include "stdafx.h"
#include <iostream>
using namespace std;
int EIGHTS()
{
	int t;
	cin >> t;
	while (t)
	{
		long long int n;
		cin >> n;

		long long int i = 192;
		for (long long int k = 1;;i = i + 250)
		{
			if (k == n)
			{
				cout << i << endl;
				break;
			}
			k++;
		}
		t--;
	}
	int dummy;
	cin >> dummy;
	return 0;
}