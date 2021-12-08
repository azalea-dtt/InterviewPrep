#include "Header.h"
#include <set>
void dfs(vector<vector<int>> &isConnected, set<int>&visited, int startPoint)
{
	if (visited.find(startPoint) != visited.end())
	{
		return; //this point was visited before
	}
	visited.insert(startPoint); //ok, this time we visit startPoint
	//from startPoint, visit all the nodes which directly or indirectly connects to startPoint node
	for (int i = 0; i < isConnected[startPoint].size(); i++)
	{
		if (isConnected[startPoint][i] == 1)
		{
			//startPoint and node i are connected --> visit node i
			dfs(isConnected, visited, i); // this will visit indirect connected node
			
		}
	}
}
int findCircleNum(vector<vector<int>>& isConnected)
{
	set<int> visited; //idx of the visited node
	int count = 0;
	for (int i = 0; i < isConnected.size(); i++)
	{
		if (visited.find(i) == visited.end()) // this point was not visited before
		{
			dfs(isConnected, visited, i);
			count++;
		}

	}
	return count;
}