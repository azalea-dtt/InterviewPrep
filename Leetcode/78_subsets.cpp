#include "Header.h"

#ifdef TEST78
void dfs(vector<int>& nums, int startPoint, vector<int>& subSet, vector<vector<int>>& result)
{
    result.push_back(subSet);
    for (int i = startPoint; i < nums.size(); i++)
    {
        subSet.push_back(nums[i]);
        dfs(nums, i + 1, subSet, result);
        subSet.pop_back();
    }
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> subSet;
    int startPoint = 0;

    dfs(nums, startPoint, subSet, result);
    return result;
}
#endif