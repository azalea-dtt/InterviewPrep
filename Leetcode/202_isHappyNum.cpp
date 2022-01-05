#include "Header.h"
#include <set>
#if TEST202
int getSumDigit(int n)
{
	int sum = 0;
	while (n > 0)
	{
		sum += (n % 10) * (n % 10);
		n = n / 10;
	}
	return sum;
}
bool isHappy(int n)
{
	set<int> nums;
	int sum = 0;
	while (nums.find(n) == nums.end())
	{
		nums.insert(n);
		n = getSumDigit(n);
		if (n == 1) return true;

	}
	return false;
}

#endif