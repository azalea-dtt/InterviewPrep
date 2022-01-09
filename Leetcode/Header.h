#pragma once
#include <iostream>
#include <vector>
#include <unordered_map>

#include <utility>      // std::pair, std::make_pair
#include <string>       // std::string

#include "TreeNode.h"
#include "ListNode.h"
using namespace std;

#define TEST3SUM	0
#define TEST704		0
#define TEST278		0
#define TEST35		0
#define TEST1477	0
#define TEST547		0
#define	TEST834		0
//834: not finish
#define TEST3		0
#define TEST567		0
#define TEST733		0
#define TEST22		0
#define TEST143		0
#define TEST1200	0
#define TEST394		0
//394: not finish
#define TEST130	    0
#define TEST797	    0
#define TEST78		0
#define TEST90		0
#define TEST47		0
#define TEST79		0
#define TEST17		0
#define TEST213		0
#define TEST55		0
#define TEST39		0
#define TEST40		0
#define TEST45		0
#define TEST62		0
#define TEST413		0
#define TEST5		0
#define TEST476		0
#define TEST973		0
#define TEST337		0
#define TEST91		0
#define TEST139		0
#define TEST300		0
#define TEST673		0
#define TEST1143	0
#define TEST583		0
#define TEST312		0
#define TEST1010	0
#define TEST322		0
#define TEST343		0

#define TEST72		0
#define TEST997		0
#define TEST1009	0
#define TEST384		0
#define TEST131		0
#define TEST202		0
#define TEST149		0
#define TEST132		0
#define TEST217		0
#define TEST1094	0
#define TEST_SINGLE_CYCLE	0
#define TEST350		0
#define TEST121		0

#define TEST382		0
#define TEST566		0
#define TEST118		0
#define TEST1463	0
#define TEST1041	0
#define TEST36		1

#define TEST74		0


vector<vector<int>> threeSum(vector<int>& nums);
int search(vector<int>& nums, int target);//704
int firstBadVersion(int n); //278
int searchInsert(vector<int>& nums, int target);//35
int minSumOfLengths(vector<int>& arr, int target);//1477
int findCircleNum(vector<vector<int>>& isConnected); //547
vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges); //not solve yet
int lengthOfLongestSubstring(string s);

#if TEST567
bool checkInclusion(string s1, string s2);
#endif

#if TEST733
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor);
#endif
#if TEST22
vector<string> generateParenthesis(int n);
#endif
#if TEST143
void reorderList(ListNode* head);
#endif
#if TEST1200
vector<vector<int>> minimumAbsDifference(vector<int>& arr);
#endif

#if TEST394
string decodeString(string s);
#endif

#if TEST130
void solve(vector<vector<char>>& board);
#endif
#if TEST797
vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph);
#endif
#if TEST47
vector<vector<int>> permuteUnique(vector<int>& nums);
#endif
#if TEST79
bool exist(vector<vector<char>>& board, string word);
#endif
#if TEST17
vector<string> letterCombinations(string digits);
#endif
#if TEST213
int rob(vector<int>& nums);
#endif
#if TEST55
bool canJump(vector<int>& nums);
#endif
#if TEST39
vector<vector<int>> combinationSum(vector<int>& candidates, int target);
#endif
#if TEST40
vector<vector<int>> combinationSum2(vector<int>& candidates, int target);
#endif
#if TEST45
int jump(vector<int>& nums);
#endif
#if TEST62
int uniquePaths(int m, int n);
#endif
#if TEST413
int numberOfArithmeticSlices(vector<int>& nums);
#endif
#if TEST5
string longestPalindrome(string s);
#endif
#if TEST476
int findComplement(int num);
#endif
#if TEST973
//find better solution??
vector<vector<int>> kClosest(vector<vector<int>>& points, int k);
#endif
#if TEST337
int rob(TreeNode* root);
#endif
#if TEST91
int numDecodings(string s);
#endif
#if TEST139
bool wordBreak(string s, vector<string>& wordDict);
#endif
#if TEST300
int lengthOfLIS(vector<int>& nums);
#endif
#if TEST673
int findNumberOfLIS(vector<int>& nums);
#endif

#if TEST1143
int longestCommonSubsequence(string text1, string text2);
#endif

#if TEST583
int minDistance(string word1, string word2);
#endif

#if TEST312
int maxCoins(vector<int>& nums);
#endif
#if TEST1010
int numPairsDivisibleBy60(vector<int>& time);
#endif

#if TEST322
int coinChange( vector<int>& coins, int amount);
#endif
#if TEST343
int integerBreak(int n);
#endif
#if TEST72
int minDistance(string word1, string word2);
#endif
#if TEST997
int findJudge(int n, vector<vector<int>>& trust);
#endif
#if TEST1009
int bitwiseComplement(int n);
#endif
#if TEST384
#endif
#if TEST131
vector<vector<string>> partition(string s);
#endif
#if TEST202
bool isHappy(int n);
#endif
#if TEST149
int maxPoints(vector<vector<int>>& points);
#endif
#if TEST132
int minCut(string s);
#endif
#if TEST217
bool containsDuplicate(vector<int>& nums);
#endif
#if TEST1094
bool carPooling(vector<vector<int>>& trips, int capacity);
#endif
#if TEST_SINGLE_CYCLE
bool hasSingleCycle(vector<int> array);
#endif

#if TEST350
vector<int> intersect(vector<int>& nums1, vector<int>& nums2);
#endif

#if TEST121
int maxProfit(vector<int>& prices);
#endif
#if TEST566
vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c);
#endif
#if TEST118
vector<vector<int>> generate(int numRows);
#endif
#if TEST1463
int cherryPickup(vector<vector<int>>& grid);
#endif
#if TEST1041
bool isRobotBounded(string instructions);
#endif

#if TEST36
bool isValidSudoku(vector<vector<char>>& board);
#endif

#if TEST74
bool searchMatrix(vector<vector<int>>& matrix, int target);
#endif