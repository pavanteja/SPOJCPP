#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
# define M_PI 3.1415926
int FENCE1()
{
	int t;
	cin >> t;
	while (t)
	{
		cout << setprecision(2) << (t*t) / (2 * M_PI) << endl;
		cin >> t;
	}
	int dummy;
	cin >> dummy;
	return 0;
}