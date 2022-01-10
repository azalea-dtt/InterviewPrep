#include "Header.h"
#include <algorithm>
#if TEST387
int firstUniqChar(string s)
{
	vector<int> vCount(26, 0);
	for (int i = 0; i < s.length(); i++)
	{
		vCount[s[i] - 'a']++;
	}
	for (int i = 0; i < s.length(); i++)
	{
		if (vCount[s[i] - 'a'] == 1)
			return i;
	}
	return -1;
}
#endif