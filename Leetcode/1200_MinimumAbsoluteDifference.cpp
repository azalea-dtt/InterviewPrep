#include "Header.h"
#include <algorithm>
#if 0
Given an array of distinct integers arr, find all pairs of elements with the minimum absolute difference of any two elements.

Return a list of pairs in ascending order(with respect to pairs), each pair[a, b] follows

a, b are from arr
a < b
	b - a equals to the minimum absolute difference of any two elements in arr
#endif


#if TEST1200
vector<vector<int>> minimumAbsDifference(vector<int>& arr)
{
	vector<vector<int>> result;
	sort(arr.begin(), arr.end());
	int min = INT_MAX;
	for (int i = 0; i < arr.size() - 1; i++)
	{
		int j = i + 1;
		if (abs(arr[j] - arr[i]) <= min)
		{
			if (abs(arr[j] - arr[i]) < min)
			{
				result.clear();
				min = abs(arr[j] - arr[i]);
			}
			
			
			vector<int> temp; 
			temp.push_back(arr[i]);
			temp.push_back(arr[j]);
			result.push_back(temp);
		}
	}
	return result;
}
#endif
