#include "Header.h"
#include <algorithm>
#include<unordered_map>
#if TEST1010
int sumOfN(int n)
{
	return (n * (n + 1) / 2);
}

int numPairsDivisibleBy60(vector<int>& time)
{
	//1. Get all the number in time array % 60
	//2. if (nums[i] + num[j])%60 == 0, then (nums[i]%60 + nums[j]%60) equal to 0 or 60
	vector<int> count(60, 0); //count: 0-59

	for (int i = 0; i < time.size(); i++)
		count[time[i] % 60]++;
	int num = 0;

	for (int i = 1; i < 30; i++)
		num += count[i] * count[60 - i];

	num += sumOfN(count[0] - 1);
	num += sumOfN(count[30] - 1);

	return num;
}
#endif
