#pragma once
#include <iostream>
#include <vector>
#include <unordered_map>

#include <utility>      // std::pair, std::make_pair
#include <string>       // std::string


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
#define TEST78		1
#define TEST90		0

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