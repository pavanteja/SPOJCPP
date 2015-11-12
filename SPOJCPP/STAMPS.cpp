#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;
int STAMPS()
{
	int parties;
	cin >> parties;
	int count = 1;
	while (count <= parties)
	{
		int stamps, friends;
		cin >> stamps;
		cin >> friends;
		int f = 0, sf[1000];
		while (f < friends)
		{
			cin >> sf[f];
			f++;
		}
		//int elements = sizeof(sf) / sizeof(sf[0]);
		std::sort(sf, sf + friends);
		long long int sum = 0;
		for (int i = friends - 1; i >= 0; i--)
		{
			sum += sf[i];
			if (sum >= stamps)
			{
				cout << "Scenario #" << count << ":" << endl << friends - i << endl<<endl;
				break;
			}
			if (i == 0)
			{
				cout << "Scenario #" << count << ":" << endl << "impossible" << endl<<endl;
			}
		}
		//cout << sf[i] << ' ';
		count++;
	}
	return 0;
}