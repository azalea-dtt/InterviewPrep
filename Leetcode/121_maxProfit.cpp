#include "Header.h"
#if TEST121
int maxProfit(vector<int>& prices)
{
	int min_price = INT_MAX;
	int max_profit = 0;
	for (int i = 0; i < prices.size(); i++)
	{
		if (prices[i] < min_price)
		{
			min_price = prices[i];
		}
		else {
			max_profit = max(max_profit, prices[i] - min_price);
		}
	}
	return max_profit;
}
#endif