#include "stdafx.h"
#include <iostream>
using namespace std;
int TRICOUNT()
{
	int t;
	cin >> t;
	while (t)
	{
		long long int n;
		cin >> n;
		cout << (long long int)(n*(n + 1)*(n + 2) / 6) + (n % 2 == 0 ? (n*(n + 2)*(2 * n - 1) / 24) : ((n*n - 1)*(2 * n + 3) / 24)) << endl;
		t--;
	}
	return 0;
}