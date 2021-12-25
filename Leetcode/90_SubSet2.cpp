#include "Header.h"
#include <algorithm>
#if TEST90
void dfs2(vector<int>& nums, int startPoint, vector<int>& subSet, vector<vector<int>>& res)
{
    res.push_back(subSet);
    for (int i = startPoint; i < nums.size(); i++)
    {
        if (i > startPoint)
        {
            if (nums[i] == nums[i - 1])
                continue;
        }
        subSet.push_back(nums[i]);
        dfs2(nums, i + 1, subSet, res);
        subSet.pop_back();
    }
}
vector<vector<int>> subsetsWithDup(vector<int>& nums)
{
    vector<vector<int>> res;
    vector<int> subSet;
    int startPoint = 0;
    sort(nums.begin(), nums.end());
    dfs2(nums, startPoint, subSet, res);
    return res;
}
#endif
