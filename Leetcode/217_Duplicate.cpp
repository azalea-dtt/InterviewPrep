#include "Header.h"
#include <algorithm>
#include <set>
#if TEST217
#if 0
bool containsDuplicate(vector<int>& nums)
{
	sort(nums.begin(), nums.end());
	int i;
	for (i = 0; i < nums.size() - 1; i++)
	{
		int j = i + 1;
		if (nums[i] == nums[j]) return true;
	}
	return false;
}
#endif
bool containsDuplicate(vector<int>& nums)
{
	set<int> visit;
	for (int i = 0; i < nums.size(); i++)
	{
		if (visit.find(nums[i]) == visit.end())
		{
			visit.insert(nums[i]);
		}
		else return true;
	}
	return false;

}
#endif
