// Leetcode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Header.h"
#include "ListNode.h"
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
#if TEST547
    //vector<vector<int>> isConnected = { {1,1,0},{1,1,0},{0,0,1} };
    vector<vector<int>> isConnected = { {1, 0, 0, 1}, {0, 1, 1, 0}, { 0, 1, 1, 1 }, { 1, 0, 1, 1 } };
    int result = findCircleNum(isConnected);
    cout << "result:" << result << endl;
#endif
#if TEST834
    int n = 6; // 6 nodes
    vector<vector<int>> edges = { {0,1} ,{0,2},{2,3},{2,4},{2,5} };
    vector<int> ans = sumOfDistancesInTree(n, edges);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
#endif

#if TEST3
    //string s = "tmmzuxt";
    string s = "abcabcbb";
       
    int result = lengthOfLongestSubstring(s);
    cout << "result:" << result << endl;
#endif

#if TEST567
    //string s1 = "ab", s2 = "eidboaoo";
    string s1 = "adc";
    string s2 = "dcda";
    bool result = checkInclusion(s1,s2);
    cout << "result:" << result << endl;
#endif

#if TEST733
#endif
#if TEST22
    int n = 3;
    vector<string> result = generateParenthesis(n);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
#endif
#if TEST143
    vector<int> nums{ 1, 2, 3 };
    ListNode* node = BuildList(nums);

    for (ListNode* temp = node; temp != nullptr; temp = temp->next)
    {
        cout << " " << temp->val;
    }
    cout << endl;
    reorderList(node);
    for (ListNode* temp = node; temp != nullptr; temp = temp->next)
    {
        cout << " " << temp->val;
    }
    cout << endl;
#endif

#if TEST1200
    vector<int> nums{ 4,2,1,3 };
    vector<vector<int>> result = minimumAbsDifference(nums);

    for (int i = 0; i < result.size(); i++)
    {
        vector<int> temp = result[i];
        for (int j = 0; j < temp.size(); j++)
            cout << temp[j] << "  ";
        cout << endl;
    }
#endif
#if TEST394
    string s = "2[abc]3[cd]ef";
    string result = decodeString(s);
    cout << result << endl;
#endif

#if TEST130
    vector<vector<char>> board = { {'X', 'X', 'X', 'X'},{'X', 'O', 'O', 'X'},{'X', 'X', 'O', 'X'},{'X', 'O', 'X', 'X'} };
    solve(board);

    for (int i = 0; i < board.size(); i++) {

        for (int j = 0; j < board[0].size(); j++)
            cout << board[i][j] << " ";
        cout << endl;
    }


#endif

#if TEST797
    vector<vector<int>> graph{ {1,2},{3},{3},{} };
    vector < vector<int>> result = allPathsSourceTarget(graph);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[0].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

#endif








}


