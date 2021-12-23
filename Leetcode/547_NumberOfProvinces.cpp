#include "Header.h"
#include <set>
void dfs(vector<vector<int>>& isConnected, vector<bool>& isVisited, int i)
{
    if ((i < 0) || (i >= isConnected.size()) || (isVisited[i] == true)) return;

    isVisited[i] = true;
    for (int j = 0; j < isConnected[i].size(); j++)
        if ((isConnected[i][j] == 1) && (isVisited[j] == false) && (i != j))
            // if i connects to this neighbor and this neighbor is not visied
            dfs(isConnected, isVisited, j);


    return;



}



int findCircleNum(vector<vector<int>>& isConnected) {
    int numOfCities = 0;
    int i, j;
    if (isConnected.size() == 0) return 0;
    vector<bool> isVisited(isConnected[0].size(), false);

    for (i = 0; i < isConnected.size(); i++)
    {
        if (isVisited[i] == false)
        {

            dfs(isConnected, isVisited, i);//if node is not visited, visit the node and its neightbor
            numOfCities++;
        }

    }
    return numOfCities;
}