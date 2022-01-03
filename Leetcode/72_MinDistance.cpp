#include "Header.h"

#if TEST72
int minDistance(string word1, string word2)
{
	//similar to prob 1143
	//2D array dynamic programing
	int m = word1.length();
	int n = word2.length();
	vector<vector<int>> dp(m + 1, vector<int>(n + 1, INT_MAX));
	for (int i = 0; i < m + 1; i++)
		dp[i][n] = m - i;
	for (int i = 0; i < n + 1; i++)
		dp[m][i] = n - i;
	for (int i = m - 1; i >= 0; i--)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			if (word1[i] == word2[j])
			{
				dp[i][j] = dp[i + 1][j + 1];
			}
			else {
				int min_dp = min(dp[i + 1][j], dp[i][j + 1]); //dp[i][j+1]: insert to word1, dp[i+1][j]: delete
				dp[i][j] = min(min_dp, dp[i+1][j+1]) + 1; //dp[i+1][j+1]: replace
			}
		}
	}
	return dp[0][0];
}
#endif