#include "Header.h"
#if 0
There is an undirected connected tree with n nodes labeled from 0 to n - 1 and n - 1 edges.
You are given the integer n and the array edges where edges[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the tree.
Return an array answer of length n where answer[i] is the sum of the distances between the ith node in the tree and all other nodes.
#endif

void dfs(vector<vector<int>> isConnected, int startPoint, int &subdist)
{
	
	for (int i = 0; i < isConnected[startPoint].size(); i++)
	{
		subdist = 0;
		if (isConnected[startPoint][i] == 1)
		{
			int root = subdist;
			subdist += root+1;
			dfs(isConnected, i, subdist);
		}
		//distance += subdist;
		
	}
	return;
}
vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges)
{
	vector<int> ans;
#if 0
	
	if (n == 0) return ans;
	int r;
	int c;
	
	vector<vector<int>> isConnected(n, vector<int>(n,0));
	for (int i = 0; i < edges.size(); i++)
	{
		r = edges[i][0];
		c = edges[i][1];
		isConnected[r][c] = 1;
		isConnected[c][r] = 1;
	}
	/*for (int i = 0; i < n; i++)
	{
		dfs(isConnected, i,distance);
		ans.push_back(distance);
	}*/
#endif
	return ans; //wrong solution, need review
}