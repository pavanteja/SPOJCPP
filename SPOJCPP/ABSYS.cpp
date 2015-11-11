#include "stdafx.h"
#include <iostream>
#include<string>
using namespace std;

enum STR2INT_ERROR { SUCCESS, OF, UF, INCONVERTIBLE };
STR2INT_ERROR str2int(int &i, char const *s, int base = 0)
{
	char *end;
	long  l;
	errno = 0;
	l = strtol(s, &end, base);
	if ((errno == ERANGE && l == LONG_MAX) || l > INT_MAX) {
		return OF;
	}
	if ((errno == ERANGE && l == LONG_MIN) || l < INT_MIN) {
		return UF;
	}
	if (*s == '\0' || *end != '\0') {
		return INCONVERTIBLE;
	}
	i = l;
	return SUCCESS;
}
int ABSYS()
{
	int t;
	cin >> t;
	while (t)
	{

		string expression, op1, op2, res1;
		int a, b, c;
		int f = 0;
		getline(cin, expression);
		if (expression[0] != '\0')
		{
			size_t found = expression.find("+");
			op1 = expression.substr(0, found - 1);
			size_t found1 = expression.find("=");
			op2 = expression.substr(found + 2, found1 - found - 3);
			res1 = expression.substr(found1 + 2);
			if (str2int(a, op1.c_str()) != 0)
			{
				f = 1;
			}
			if (str2int(b, op2.c_str()) != 0)
			{

				f = 2;
			}
			if (str2int(c, res1.c_str()) != 0)
			{
				f = 3;
			}
			switch (f)
			{
			case 1:cout << (c - b) << " + " << b << " = " << c << endl;break;
			case 2:cout << a << " + " << (c - a) << " = " << c << endl;break;
			case 3:cout << a << " + " << b << " = " << (a + b) << endl;break;
			}
			
			t--;
		}
	}
	return 0;
}