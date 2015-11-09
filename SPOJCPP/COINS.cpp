#include "stdafx.h"
#include <iostream>
#include <map>
using namespace std;
long long int coins(long long int value);
std::map<int, long long int> Cmap;
int COINS()
{
	int t;
	
	while (scanf_s("%d", &t) != EOF)
	{
		long long int  r;
		r = coins(t);
		cout << r;
		cin >> t;
	}
	int dummy;
	cin >> dummy;
	return 0;
}

long long int coins(long long int value)
{
	if (Cmap.find(value) == Cmap.end())
	{
		long long int new_value = (value / 2) + (value / 3) + (value / 4);
		if (new_value <= value)
		{
			Cmap.insert(std::pair<int, long long int>(value, value));
			return value;
		}
		else
		{
			long long int ti = coins(value / 2) + coins(value / 3) + coins(value / 4);
			Cmap.insert(std::pair<int, long long int>(value, ti));
			return ti;


		}



	}
	else
	{
		return Cmap.find(value)->second;
	}
}