#include "stdafx.h"
#include <iostream>
#include <vector>
#include <time.h>
using namespace std;
int main()
{
	clock_t tStart = clock();
	const  int n = 86028121;
	vector<int> primes_list(5000000);
	primes_list[0] = 2;
	int i = 0, j = 0, p = 1;
	vector<bool> primes(n, false);
	for (i = 3; i < n; i = i + 2)
	{
		if (!primes[i])
		{
			primes_list[p++] = i;
			for (j = 3; j * i < n; j += 2)
			{

				primes[i * j] = 1;

			}

		}

	}

	primes_list[4999998] = 86028113;
	primes_list[4999999] = 86028121;
	int Q, inp;
	cin >> Q;
	for (i = 0; i < Q; i++)
	{
		cin >> inp;
		cout << primes_list[inp - 1] << endl;
	}
	printf("Time taken: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
	return 0;
}