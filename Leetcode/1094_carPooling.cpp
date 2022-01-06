#include "Header.h"

#if TEST1094
bool carPooling(vector<vector<int>>& trips, int capacity)
{
	vector<int> counts(1001, 0);
	for(auto trip : trips) {

		counts[trip[1]] += trip[0];
		counts[trip[2]] -= trip[0];
	}

	
	for (int i = 0; i < counts.size(); i++) {
		capacity -= counts[i];
		if ( capacity < 0) return false;


	}

	return true;
}
#endif