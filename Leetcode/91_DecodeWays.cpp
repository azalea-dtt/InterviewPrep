#include "Header.h"
#include <string>
#if TEST91
//dynamic program
int numDecodings(string s)
{
	int len = s.length();
	vector<int> dp(len + 1, 0);
	//dp[i]: number of decoding ways for len = i
	dp[0] = 1; // for blank string, there's only 1 way to decode to another blank string
	dp[1] = s[0] == '0' ? 0 : 1; 
	for (int i = 2; i <= len; i++)
	{
		int oneDigit = s[i-1] - '0';
		int twoDigits = stoi(s.substr(i - 2, 2));
		if (oneDigit > 0)
			dp[i] += dp[i - 1];
		if (twoDigits >= 10 && twoDigits <= 26)
			dp[i] += dp[i - 2];
	}

	return dp[len];
}
#endif