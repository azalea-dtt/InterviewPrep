#pragma once
#include <iostream>
#include <vector>
#include <unordered_map>

#include <utility>      // std::pair, std::make_pair
#include <string>       // std::string
using namespace std;

#define TEST3SUM 0
#define TEST704	0
#define TEST278	0
#define TEST35	0
#define TEST1477 1

vector<vector<int>> threeSum(vector<int>& nums);
int search(vector<int>& nums, int target);//704
int firstBadVersion(int n); //278
int searchInsert(vector<int>& nums, int target);//35
int minSumOfLengths(vector<int>& arr, int target);//1477