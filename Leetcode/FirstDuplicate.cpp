#include "Header.h"
int firstDuplicateValue(vector<int> array)
{
	unordered_map<int,int> search_map;
	for (int i = 0; i < array.size(); i++)
	{
		if (search_map.find(array[i]) == search_map.end())
		{
			search_map[array[i]] = i;
		}
		else return array[i];
	}
	return -1;

	
}