#include "Header.h"
using namespace std;
std::vector<int> moveElementToEnd(vector<int> array, int toMove)
{
	int count = 0;
	int current = 0;
	int len = array.size();
	for (int i = 0; i < len; i++)
	{
		if (array[current] == toMove) {
			count++;
			array.erase(array.begin() + current);

		}
		else current++;
	}
	for (int i = 0; i < count; i++)
		array.push_back(toMove);
	return array;
}