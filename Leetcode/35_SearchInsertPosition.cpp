#include "Header.h"
#if 0
Given a sorted array of distinct integersand a target value, return the index if the target is found.
If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.
#endif
int SearchInsert(vector<int> & nums, int target, int begin, int end)
{
    if (end > int(nums.size() - 1))
        return end;
    if (begin < 0)
        return 0;
    if (begin > end)
        return begin;
    int mid = begin + (end - begin) / 2;
    if (nums[mid] == target) return mid;
    if (nums[mid] > target)
        end = mid - 1;
    else
        begin = mid + 1;
    return SearchInsert(nums, target, begin, end);

}
int searchInsert(vector<int> & nums, int target)
{
    int begin = 0;
    int end = nums.size() - 1;
    return SearchInsert(nums, target, begin, end);
}