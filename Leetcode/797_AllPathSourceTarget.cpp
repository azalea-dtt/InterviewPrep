#include "Header.h"
#include <queue>
#if TEST797

void dfs(vector<vector<int>>& graph, int startPoint, vector<int>& visitQ, vector<vector<int>>& result)
{
	if (startPoint == graph.size() - 1)
	{
		result.push_back(visitQ);
		return;
	}
	for (int i = 0; i < graph[startPoint].size(); i++)
	{
		visitQ.push_back(graph[startPoint][i]);
		dfs(graph, graph[startPoint][i], visitQ, result);
		visitQ.pop_back();
	}
}


vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph)
{
	vector<vector<int>> result;

	int n = graph.size();
	vector<int> visitQ;
	visitQ.push_back(0);
	int startPoint = 0;
	dfs(graph, startPoint, visitQ, result);

	
	return result;
}
#endif