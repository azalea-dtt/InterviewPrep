#include "Header.h"
#include <algorithm>
#if TEST45
int jump(vector<int>& nums)
{
	int maxStep = 0;
	int step = 0;
	// l, r: define the windows of next step
	int l = 0;
	
	int r = 0;
	while (r < nums.size()-1) // when r == nums.size() - 1==> stop
	{
		maxStep = 0;
		for (int i = l; i <= r; i++)
		{
			maxStep = max(maxStep, i + nums[i]);
		}
		l = r + 1;
		r = maxStep;
		step++;
	}
	return step;
}
#endif