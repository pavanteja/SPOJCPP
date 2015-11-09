#include "stdafx.h"
#include <iostream>
using namespace std;
int MADODDSUM()
{
	int a, b;
	cin >> a;
	cin >> b;
	//a = 0;b = 100000000;
	long long int sum=0;
	for (int i = a;i <= b;i++)
	{
		if (i % 2 != 0)
		{
			sum += i;
		}
	}
	cout << sum;
	int dummy;
	cin >> dummy;
	return 0;
}