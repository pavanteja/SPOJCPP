//#include "stdafx.h"
//#include <iostream>
//#include<string>
//#include<math.h>
//
//#include <algorithm>
//using namespace std;
//int main()
//{
//	 int t, n[100000], m[100000];
//
//	int ng, nm, nc, mc;
//	cin >> t;
//	int battle = 1;
//	while (t)
//	{
//		
//		string g;
//		getline(cin,g);
//		cin >> ng;
//		cin >> nm;
//		for (int i = 0;i < ng;i++)
//			cin >> n[i];
//		std::sort(n, n + ng);
//		for (int i = 0;i < nm;i++)
//			cin >> m[i];
//		std::sort(m, m + nm);
//		long long int maxv = max(ng, nm);
//		nc = mc = 0;
//		for (int i = 0;i < maxv; i++)
//		{
//			if (n[nc] < m[mc])
//			{
//				nc++;
//			}
//			else if (n[nc] >= m[mc])
//			{
//				mc++;
//			}
//		}
//		if (nc == ng)
//		{
//			cout << "MechaGodzilla" << endl;
//		}
//		 if (mc == nm)
//		{
//			cout << "Godzilla" << endl;
//		}
//		/*else
//		{
//			cout << "uncertain" << endl;
//		}*/
//		t--;
//	}
//	int dummy;
//	cin >> dummy;
//	return 0;
//}

#include <iostream>
#include<math.h>
#include <algorithm>
#include<string>
using namespace std;
int main()
{
	int t, n[100000], m[100000];

	long long int ng, nm, nc, mc;
	cin >> t;
	int battle = 1;
	while (t)
	{

		string g;
		getline(cin, g);
		cin >> ng;
		cin >> nm;
		for (int i = 0;i < ng;i++)
			cin >> n[i];
		std::sort(n, n + ng);
		for (int i = 0;i < nm;i++)
			cin >> m[i];
		std::sort(m, m + nm);
		long long int maxv = max(ng, nm);
		nc = mc = 0;
		for (int i = 0;i < maxv; i++)
		{
			if (n[nc] < m[mc])
			{
				nc++;
			}
			else if (n[nc] >= m[mc])
			{
				mc++;
			}
		}
		if (nc >mc)
		{
			cout << "MechaGodzilla" << endl;
		}
		else if (mc>nc)
		{
			cout << "Godzilla" << endl;
		}
		else
		{
			cout << "uncertain" << endl;
		}
		t--;
	}
	return 0;
}