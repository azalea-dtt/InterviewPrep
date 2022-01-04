#include "Header.h"
#if TEST384
vector<int> orgNums;

vector<int> reset() {
	return orgNums;
}

vector<int> shuffle() {
	int len = orgNums.size();
	//Generate a random number between 0 to len - 1;
	//int randIdx = rand() % len;
	vector<int> shuffleNums;
	shuffleNums.assign(orgNums.begin(), orgNums.end());
	for (int i = 0; i < len; i++)
	{
		int randIdx = i + rand() % (len - i); 
		std::swap(shuffleNums[i], shuffleNums[randIdx]); // shuffle number in i position to 1 pos after i
	}
	return shuffleNums;
}
void init(vector<int> nums)
{
	orgNums.assign(nums.begin(), nums.end());
}

#endif