#include "stdafx.h"
#include <iostream>
using namespace std;
int HANGOVER()
{
	float f;
	cin >> f;
	while (f)
	{

		float s = 0.00;
		int c = 1;

		for (float i = 1;;i++, c++)
		{
			s += 1 / (i + 1);
			if (s > f)
			{
				break;
			}
		}
		cout << c <<" card(s)"<< endl;
		cin >> f;
	}
	int dummy;
	cin >> dummy;
	return 0;
}