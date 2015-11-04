// SPOJCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"
int main1()
{
	
	const long double n = 100000000;
	bool  numbers[100000000];
	numbers[0] = true;
	numbers[1] = true;
	for (long double i = 2; i <sqrtl(n); i++)
	{
		for (long double j = i*i; j < n; j++)
		{
			if ((int)j% (int)i == 0)
			{
				numbers[(int)j] = true;
			}
		}

	}
	long double c = 1;
	for (long double i = 0; i < n; i++)
	{
		if (!numbers[(int)i])
		{
			if ((int)c % 100 == 1)
			{
				printf("%l",i);
			}
			c++;
		}

	}
	int s;
	scanf_s("%d",&s);
	return 0;
}



