#include "stdafx.h"
#include <iostream>
#include<math.h>
using namespace std;

int CANTON()
{
	int te;
	cin >> te;
	while (te)
	{
		long long int n;
		cin >> n;
		
			
			int d = (sqrt(8 * n + 1) - 1) / 2;
			int e = n - d * (d + 1) / 2;
			int v1 = e <= 1 ? d + e : d + 2 - e;
			int v2 = e <= 1 ? 1 : e;
			cout << "TERM " << n << " IS " << (d % 2 == 0 ? v1 : v2) << "/" << (d % 2 == 0 ? v2 : v1) << endl;
			

		te--;
	}
	int dummy;
	cin >> dummy;
	return 0;
}