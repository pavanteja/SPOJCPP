#include "stdafx.h"
#include <iostream>
using namespace std;

int AP2()
{
	int t;
	cin >> t;

	while (t)
	{
		long long int f, l, s, c;
		cin >> f >> l >> s;
		long int n = (s * 2) / (f + l);
		long int d = (l - f) / (n-5);
		cout << n << endl;
		int a = f - (2 * d);
		for (int i = 0;i < n;i++)
			cout << a + (i*d) << (i+1==n?"":" ");
		cout << endl;
		t--;
	}
	int dummy;
	cin >> dummy;
	return 0;
}