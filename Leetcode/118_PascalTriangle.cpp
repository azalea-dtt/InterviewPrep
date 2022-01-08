#include "Header.h"
#if TEST118
vector<vector<int>> generate(int numRows)
{
	vector<vector<int>> dp(numRows, vector<int>(0,0));
	
	dp[0] = vector<int>{ 1 };
	dp[1] = vector<int>{ 1,1 };
	for (int i = 2; i < numRows; i++)
	{
		dp[i] = vector<int>(i+1, 0);
		dp[i][0] = 1;
		dp[i][i] = 1;
		for (int j = 1; j < i; j++)
			dp[i][j] = dp[i-1][j - 1] + dp[i-1][j];
	}

	return dp;
	
}
#endif