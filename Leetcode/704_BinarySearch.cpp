#include "Header.h"
/*
Given an array of integers nums which is sorted in ascending order, and an integer target, 
write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
You must write an algorithm with O(log n) runtime complexity.
*/
int BinarySearch(vector<int>& nums, int target, int begin, int end)
{
	int mid = (end - begin) / 2 + begin;
	if (mid < 0) return -1;
	if (mid > nums.size() - 1) return -1;
	if (begin > end) return -1;
	if (nums[mid] == target)
		return (mid);
	if (nums[mid] > target)
	{
		end = mid - 1;
	}
	else begin = mid + 1;
	return BinarySearch(nums, target, begin, end);
}
int search(vector<int>& nums, int target)
{
	int begin = 0;
	int end = nums.size() - 1;
	return BinarySearch(nums, target, begin, end);
}