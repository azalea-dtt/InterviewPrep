#include "Header.h"
#include <algorithm>
#include <vector>
#if TEST47

void dfs(vector<int>nums, vector<int>& permute, vector<vector<int>>& result, unordered_map<int,int> &map_nums)
{
	//base case
	if (permute.size() == nums.size())
	{
		result.push_back(permute);
		return;
	}
	for (auto &itr: map_nums)
	{
		if (itr.second > 0)
		{
			permute.push_back(itr.first);
			itr.second--;
			dfs(nums, permute, result, map_nums);
			permute.pop_back();
			itr.second++;
		}
	}



}
vector<vector<int>> permuteUnique(vector<int>&nums)
{
	vector<vector<int>> result;
	vector<int> permute;
	
	
	unordered_map<int, int> map_nums;
	for (int i = 0; i < nums.size(); i++)
	{
		map_nums[nums[i]]++;
	}
		
	dfs(nums, permute, result, map_nums);
	return result;
}
#endif