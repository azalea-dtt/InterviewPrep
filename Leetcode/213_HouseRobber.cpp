#include "Header.h"
#include <algorithm>
//dynamic programming

#if TEST213
//Because 1st and the last house are adjacent, so we cannot rob 1st house and last house at the same time
// The problem can reuse house robber 1 function, but we need apply it to two subarrays
// 1. Use the house_rob_1 for array from 0 - n-2, we exclude the last house
// 2. Use the house_rob_1 for array from 1 - n-1, we exclude the first house
// 3. Finally, find the max b/w choice 1 and choice 2
int rob1(vector<int>& nums)
{
	int n = nums.size();
	vector<int> dp(n, 0);
	dp[0] = nums[0]; // rob up to house idx 0
	dp[1] = max(nums[0], nums[1]); //rob up to house idx 1

	for (int i = 2; i < n; i++) {
		dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
	}
	return dp[n - 1];

}

int rob(vector<int>& nums)
{
	if (nums.size() == 0) return 0;
	if (nums.size() == 1) return nums[0];
	if (nums.size() == 2) return max(nums[0], nums[1]);
	vector<int> nums1;
	nums1.assign(nums.begin(), nums.end() - 1);
	vector<int> nums2;
	nums2.assign(nums.begin() + 1, nums.end());

	int choice1 = rob1(nums1);
	int choice2 = rob1(nums2);
	cout << "choice1:" << choice1 << endl;
	cout << "choice2:" << choice2 << endl;
	return max(choice1, choice2);
}
#endif