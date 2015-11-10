#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

char str[5002];

#define inf 1000000000
#define MAXN 5005

using namespace std;
string code;
int dp[MAXN];
int limit;

int rek(int idx = 0) {
	if (idx > limit) return 1;

	if (dp[idx]) return dp[idx];

	if (code[idx] == '0') return 0;

	if (idx + 1 < limit
		&& (code[idx] == '1' || (code[idx] == '2' && code[idx + 1] <= '6'))) {
		if (code[idx + 1] == '0')
			return dp[idx] = rek(idx + 2);
		else
			return dp[idx] = rek(idx + 1) + rek(idx + 2);
	}
	else return dp[idx] = rek(idx + 1);
}

int ACODECOPY() {
	cin.sync_with_stdio(false);

	while (true) {
		getline(cin, code);
		if (code[0] == '0') break;
		limit = code.size();
		memset(dp, 0, sizeof dp);
		printf("%d\n", rek());
	}

	return 0;
}
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t)
//	{
//		cout << endl;
//		string s;
//		getline(cin, s);
//
//		t--;
//	}
//	return 0;
//}