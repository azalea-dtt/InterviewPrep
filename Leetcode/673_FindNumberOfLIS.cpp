#include "Header.h"
#include <vector>
#include <map>
#include <iostream>
#include <utility>
#include <functional>
#if TEST673
int findNumberOfLIS(vector<int>& nums)
{
	//key: index
	// value: pair of count and len
	
	vector<int> len(nums.size(), 1);
	vector<int> count(nums.size(), 1);
	int countLIS = 0;
	int lenLIS = 0;
	int maxLen;
	int maxCount;
	int i;
	int j;
	int nLen, nCount;
	
	for (i = nums.size() - 1; i >= 0; i--)
	{
		maxLen = 1;
		maxCount = 1;
		// start from i, find LIS
		for (j = i + 1; j < nums.size(); j++)
		{
			if (nums[j] > nums[i])
			{
				nLen = len[j];
				nCount = count[j];
				if (nLen + 1 > maxLen)
				{
					maxLen = nLen + 1;
					maxCount = nCount;
				}
				else if (nLen + 1 == maxLen)
				{
					maxCount+= nCount;
				}

			}
		}
		
		
		count[i] = maxCount;
		len[i] = maxLen;
		if (maxLen > lenLIS)
		{
			lenLIS = maxLen;
			countLIS = count[i];
		}
		else if (lenLIS == len[i])
		{
			countLIS += count[i];
		}
	}
	/*for (i = 0; i < nums.size(); i++)
	{
		if (len[i] == lenLIS)
			countLIS += count[i];
	}*/


	return countLIS;
}
#endif