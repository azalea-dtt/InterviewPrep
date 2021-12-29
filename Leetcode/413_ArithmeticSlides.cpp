#include "Header.h"

#if TEST413
int numberOfArithmeticSlices(vector<int>& nums)
{
	int result = 0;
	if (nums.size() < 3) return 0;
	int count = 0;
	for (int i = 2; i < nums.size(); i++)
	{
		if ((nums[i] - nums[i - 1]) == (nums[i - 1] - nums[i - 2])) {
			count += 1;
			result += count;
		}
		else count = 0;
	}
	return result;
}
#endif