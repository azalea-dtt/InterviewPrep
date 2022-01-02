#include "Header.h"
#include <algorithm>

#if TEST343
int integerBreak(int n)
{
	vector<int> dp(n + 1, 0);
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 1; i <=n; i++)
		for (int j = 1; j < i; j++)
		{
			int a = (i - j) * j;
			int b = dp[i - j] * j > dp[i] ? dp[i-j]*j:dp[i];
			dp[i] = max(a, b);

		}
	return dp[n];
}
#endif
