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

#if TEST47
    vector<int> nums{ 4,2,1,3 };
    vector < vector<int>> result = permuteUnique(nums);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
#endif
#if TEST79
    vector<vector<char>> board = { {'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'} };
    string word = "ABCB";
    bool result = exist(board, word);
    if (result)
        cout << "result: found:" << result << endl;
    else cout << "not found" << endl;
#endif
#if TEST17
    string digits = "23";
    vector<string> result = letterCombinations(digits);
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    cout << endl;
#endif
#if TEST213
    vector<int> nums{ 0 };
    int result = rob(nums);
    cout << "result:" << result << endl;
#endif

#if TEST55
    vector<int> nums{ 2,3,1,1,4 };
    bool result = canJump(nums);
    cout << "result:" << result << endl;
#endif
#if TEST39
    vector<int> nums{ 2,3,1,4 };
    int target = 9;
    vector<vector<int>> result = combinationSum(nums, target);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
#endif
#if TEST40
    vector<int> nums{ 2,3,1,1,4 };
    int target = 9;
    vector<vector<int>> result = combinationSum2(nums, target);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
#endif
#if TEST45
    vector<int> nums{ 2,3,1,1,4 };
    int result = jump(nums);
    cout << "result:" << result << endl;
#endif
#if TEST62
    int m = 3;
    int n = 7;
    int result = uniquePaths(m, n);
    cout << "result:" << result << endl;
#endif
#if TEST413
    vector<int> nums{ 1,2,3,4 };
    int result = numberOfArithmeticSlices(nums);
    cout << "result:" << result << endl;
#endif
#if TEST476
    int num = 7;
    int result = findComplement(num);
    cout << "result:" << result << endl;
#endif
#if TEST973
    vector<vector<int>> points  { {3,3},{5,-1},{-2,4} };
    int k = 2;
    vector<vector<int>> result = kClosest(points, k);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
#endif
#if TEST337
#define null -1
    vector<int> nums {3, 2, 3, null, 3, null, 1};
    TreeNode* root = BuildTree(nums, 0);
    int result = rob(root);
    cout << "result:" << result << endl;
#endif
#if TEST91
    string s = "226";
    int result = numDecodings(s);
    cout << "result:" << result << endl;

#endif
#if TEST139
    string s = "leetcode";
    vector<string> wordDict{ "leet","code" };
    bool result = wordBreak(s, wordDict);
    cout << "result:" << result << endl;
#endif
#if TEST673
    //vector<int> nums { 1,1,1,2,2,2,3,3,3 };
    vector<int> nums{ 2,2,2,2,2 };
    int result = findNumberOfLIS(nums);
    cout << "result:" << result << endl;
#endif
#if TEST1143
    string text1 = "abdcde";
    string text2 = "ace";
    int  result = longestCommonSubsequence(text1, text2);
    cout << "result:" << result << endl;
#endif

#if TEST583
    string word1 = "sea";
    string word2 = "eat";
    int result = minDistance(word1, word2);
    cout << "result:" << result << endl;
#endif

#if TEST312
    vector<int> nums{ 3,1,5,8 };
    int result = maxCoins(nums);
    cout << "result:" << result << endl;
#endif
#if TEST1010
    vector<int> nums{ 30,20,150,100,40 };
    int result = numPairsDivisibleBy60(nums);
    cout << "result:" << result << endl;
#endif

#if TEST322
    vector<int> coins{ 1,2,5 };
    int amount = 11;
    int result = coinChange(coins, amount);
    cout << "result:" << result << endl;
#endif
#if TEST343
    int n = 10;
    int result = integerBreak(10);
    cout << "result:" << result << endl;
#endif
#if TEST72
    string word1 = "intention";
    string word2 = "execution";
    
    int result = minDistance(word1, word2);
    cout << "result:" << result << endl;
#endif


}


