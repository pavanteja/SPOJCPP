#include "stdafx.h"
#include <iostream>
using namespace std;
int WILLITSIT()
{
	long long int a;
	
	
		cin >> a;
		if (a > 1 && (a&(a - 1)) == 0)
		{
			cout << "TAK" << endl;
		}
		else
		{
			cout << "NIE" << endl;
		}

	
	int dummy = 1;
	cin >> dummy;
	return 0;
}