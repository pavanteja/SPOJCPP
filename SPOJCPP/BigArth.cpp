#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
string  add(string a,string b);
string add(string a,string b)
{


	int carry = 0;
	int al = a.length();
	int bl = b.length();
	for (int i = al > bl ? al - 1 : bl - 1;i >= 0;i--)
	{

	}
	return "";
}
int BigArth()
{
	string a = "9999999999999999999";
	cout << a << " - " << a.length() << endl;
	string b = "1";
	cout << b << " - " << b.length() << endl;

	cout << "result" << add(a, b);
	return 0;
}
