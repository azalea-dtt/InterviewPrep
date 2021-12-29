#include "Header.h"
#if TEST39
void dfs(vector<vector<int>>& result, vector<int>& candidates, int target, vector<int>& comb, int &sum, int startIdx)
{
	if (sum == target)
	{
		result.push_back(comb);
		return;
	}
	if (candidates.size() == 0) return;
	if (startIdx >= candidates.size() || sum > target) return;
	comb.push_back(candidates[startIdx]);
	sum = sum + candidates[startIdx];

	dfs(result, candidates, target, comb, sum , startIdx);
	comb.pop_back();
	sum = sum - candidates[startIdx];
	dfs(result, candidates, target, comb, sum, startIdx+1);
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target)
{
	vector<vector<int>> result;
	vector<int> comb;
	int sum=0;
	int startIdx = 0;
	dfs(result, candidates, target, comb, sum, startIdx);
	return result;
}
#endif
