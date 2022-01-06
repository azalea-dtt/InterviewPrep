#include "Header.h"
#if TEST_SINGLE_CYCLE

int getNextIdx(int &curIdx, vector<int>array)
{
	int jump = array[curIdx];
	int nextIdx = curIdx + jump;
	if ((nextIdx) >= 0)
		nextIdx = nextIdx % (array.size());
	else {
		while (nextIdx < 0)
			nextIdx += array.size();
		nextIdx = nextIdx % array.size();
	}
	
	return nextIdx;
}
bool hasSingleCycle(vector<int> array) {
	// Write your code here.
	int nElemVisited = 0;
	int curIdx = 0;
	while (nElemVisited < array.size())
	{
		if ((nElemVisited > 0) && (curIdx == 0))
		{
			//comeback to 1st node without visiting all nodes in the array
			return false;
		}
		nElemVisited++;
		curIdx = getNextIdx(curIdx, array);
		cout << curIdx << endl;
	}
	//nElem == array.size()
	if (curIdx == 0) return true;
	return false;
}

#endif