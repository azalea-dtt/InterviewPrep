#include "Header.h"
#if TEST55
bool canJump(vector<int>& nums)
{
	// greedy algorithm
	if (nums.size() == 0) return false;
	int goal = nums.size() - 1; //start with last index
	for (int i = nums.size() - 2; i >= 0; i--)
	{
		if (i + nums[i] >= goal) // from i, we can jump to goal --> set the goal to i
			goal = i;
	}
	if (goal == 0) return true;
	return false;
}
#endif