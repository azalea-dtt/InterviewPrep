#include "Header.h"
#include <set>
#include <vector>
#include <map>

#if TEST312
int dfs(vector<int>& nums, int l, int r, vector<vector<int>> &dp)
{
	if (l > r) return 0;
	
	if (dp[l][r] > 0) return dp[l][r];
		
	if (l==r)
		return nums[l - 1] * nums[l] * nums[l + 1];
	dp[l][r] = 0;
	int coins = 0;
	for (int i = l; i <= r; i++)
	{
		coins = nums[l - 1] * nums[i] * nums[r + 1]; ////consider i is the last one
		coins += dfs(nums, l, i - 1, dp) + dfs(nums, i + 1, r, dp);
		dp[l][r] = max(coins, dp[l][r]);
	}
	return dp[l][r];

}
int maxCoins(vector<int>& nums)
{
	//1. Update the array with 1 on the left and 1 on the right
	int len = nums.size();
	nums.insert(nums.begin(), 1);
	nums.push_back(1);
	//2. 2D array dp
	// vector<int> : l, r 
	// int: coins value
	vector<vector<int>> dp(len+2, vector<int>(len+2,0));
	return dfs(nums, 1, nums.size() - 2, dp);
}

#endif