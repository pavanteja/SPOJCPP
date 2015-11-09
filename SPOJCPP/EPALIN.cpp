#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string getPal(string line);
int is_pal(string s);
string getPal(string line)
{
	if (is_pal(line))
		return line;
	return line[0] + getPal(line.substr(1)) + line[0];
}

int is_pal(string s)
{
	for (int i = 0; i < s.length() / 2; i++)
	{
		if (s[i] != s[s.length() - 1 - i]) return 0;
	}
	return 1;
}
int EPALIN()
{
	
	string line;
	
	while (getline(cin,line))
	{
		line = getPal(line);
		cout << line << endl;
		
	}
	
	
	
	return 0;
}

 