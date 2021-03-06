#include "Header.h"
#include <algorithm>
#if TEST350
vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
{
	int len1 = nums1.size();
	int len2 = nums2.size();
	vector<int> result;
	sort(nums1.begin(), nums1.end());
	sort(nums2.begin(), nums2.end());

	int i = 0;
	int j = 0;
	while (i < len1 && j < len2)
	{
		if (nums1[i] < nums2[j])
		{
			i++;
		}
		else if (nums1[i] == nums2[j])
		{
			result.push_back(nums1[i]);
			i++;
			j++;
			
		}
		else {
			j++;
		}
	}
	return result;
	
}
#endif