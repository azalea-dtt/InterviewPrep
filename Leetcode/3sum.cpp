#include "Header.h"
#include <iostream>
#include <vector>
#include <unordered_map>

#include <utility>      // std::pair, std::make_pair
#include <string>       // std::string
#include <algorithm>

using namespace std;
vector<vector<int>> twoSum(vector<int>& nums, int sum)
{
    int i;
    std::unordered_map<int, int> search2;
    vector<vector<int>> vresult2;

    for (i = 0; i < nums.size(); i++)
    {
        if (search2.find(sum - nums[i]) == search2.end())
        {
            std::pair<int,int> num1 = std::make_pair(nums[i], i);
            search2.insert(num1);
        }
        else {
            vector<int> result2;
            result2.push_back(nums[i]);
            result2.push_back(sum - nums[i]);
            vresult2.push_back(result2);
        }
    }
    return vresult2;
}
vector<vector<int>> threeSum(vector<int>& nums) {
    int sum = 0;
    int i, j;
    vector<vector<int>> vresult3;
    if (nums.size() == 0) return vresult3;
    sort(nums.begin(), nums.end());
    for (i = 0; i < nums.size() - 1; i++)
    {
        sum = 0 - nums[i];
        vector<int> remains;
        remains.assign(nums.begin() + i + 1, nums.end());
        vector<vector<int>> vresult2 = twoSum(remains, sum);
        for (j = 0; j < vresult2.size(); j++)
        {
            vector<int> result2 = vresult2[j];
            vector<int> result3;
            result3.assign(result2.begin(), result2.end());
            result3.push_back(nums[i]);
            vresult3.push_back(result3);

        }
    }
    return vresult3;
}