#include "Header.h"
#include <algorithm>
#if TEST40
void findCombination2(vector<vector<int>>& result, vector<int>& candidates, int target, vector<int>& comb, int startIdx);
vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
{
	//1. sort the candidates: if there're duplicated numbers, after sorting, they are next to each other
	sort(candidates.begin(), candidates.end());
	vector<vector<int>> result;
	int startIdx = 0;
	vector<int> comb;
	findCombination2(result, candidates, target, comb, startIdx);
	return result;
}

void findCombination2(vector<vector<int>>& result, vector<int>& candidates, int target, vector<int>& comb, int startIdx)
{
	if (target < 0) return; 
	if (candidates.size() == 0) return;
	if (target == 0)
	{
		result.push_back(comb);
		return;
	}
	//target > 0
	for (int i = startIdx; i < candidates.size(); i++)
	{
		if (i == startIdx || candidates[i] != candidates[i - 1])
		{
			comb.push_back(candidates[i]);
			findCombination2(result, candidates, target-candidates[i], comb, i+1);
			comb.pop_back();
		}
	}
}
#endif