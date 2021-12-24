#include "Header.h"
#if TEST78
//backtrack 
void dfs(vector<int> nums, int startPoint, vector<int>& subSet, vector<vector<int>>& res)
{
	res.push_back(subSet);
	
	for (int i = startPoint; i < nums.size(); i++)
	{
		subSet.push_back(nums[i]);
		dfs(nums, i + 1, subSet, res);
		subSet.pop_back();
	}
}



vector<vector<int>> subsets(vector<int>& nums)
{
	vector<vector<int>> res;
	vector<int> subset;
	int startPoint = 0;
	
	dfs(nums, startPoint, subset, res);
	return res;
}
#endif