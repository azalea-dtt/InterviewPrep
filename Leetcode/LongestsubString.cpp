#include "Header.h"
#include <algorithm>

int lengthOfLongestSubstring(string s)
{
	unordered_map<char, int> search_map;
	int length = 0;
	int start = 0;
	for (int i = 0; i < s.length(); i++)
	{
		unordered_map<char, int>::const_iterator itr = search_map.find(s[i]);
		
		if (itr != search_map.end())
		{
			std::cout << "find: " << s[i] << std::endl;
			std::cout << " found idx: " << itr->second;
			std::cout << std::endl;
			start = max(start, search_map[s[i]] + 1);
		}
		search_map[s[i]] = i;
		length = max(length, i - start + 1);
		
	}
	return length;
}