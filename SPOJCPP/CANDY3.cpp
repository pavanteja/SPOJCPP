#include "stdafx.h"
#include <iostream>
using namespace std;
int CANDY3()
{
	int t;
	cin >> t;
	while (t)
	{
		t--;
		cout << endl;
		int children;
		cin >> children;
		int c = children;
		long long tot = 0;
		while (c)
		{
			int candy;
			cin >> candy;
			tot = (tot+candy)%children;
			c--;
		}
		if (tot == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}