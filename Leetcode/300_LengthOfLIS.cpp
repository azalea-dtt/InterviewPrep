#include "Header.h"
#if TEST300
int lengthOfLIS(vector<int>& nums) {
	vector<int> len(nums.size(), 1);

	int lenLIS = 0;
	int maxLen;

	int i;
	int j;
	int nLen;

	for (i = nums.size() - 1; i >= 0; i--)
	{
		maxLen = 1;

		// start from i, find LIS
		for (j = i + 1; j < nums.size(); j++)
		{
			if (nums[j] > nums[i])
			{
				nLen = len[j];

				if (nLen + 1 > maxLen)
				{
					maxLen = nLen + 1;

				}


			}
		}



		len[i] = maxLen;
		if (maxLen > lenLIS)
		{
			lenLIS = maxLen;

		}

	}


	return lenLIS;

	}
#endif