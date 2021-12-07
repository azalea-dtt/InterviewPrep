// Leetcode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Header.h"
int main()
{
//Test 3Sum
#if TEST3SUM
    std::vector<int> nums = { -1,0,1,2,-1,-4 };
    vector<vector<int>> vresult3 = threeSum(nums);

    for (int i = 0; i < vresult3.size(); i++)
    {
        vector<int> result3 = vresult3.at(i);
        for (int j = 0; j < result3.size(); j++)
        {
            cout << result3[j] << ",";
        }
        cout << endl;
    }
#endif
#if TEST704
    std::vector<int> nums = {  };
    int target = 9;
    int result = search(nums, target);
    cout << "search:" << result << endl;
#endif
#if TEST278
    int n = 5;
    int bad = 4;
    int result = firstBadVersion(n);
    cout << "search:" << result << endl;
#endif
#if TEST35
    std::vector<int> nums = { 1,3,5,6 };
    int target = 0;
    int result = searchInsert(nums, target);
    cout << "search:" << result << endl;
#endif

#if TEST1477
#endif



}


