#include "Header.h"

#if TEST997
int findJudge(int n, vector<vector<int>>& trust)
{
	vector<vector<int>> trust_mat(n + 1, vector<int>(n + 1,0));

	for (int i = 0; i < trust.size(); i++)
	{
		trust_mat[trust[i][0]][trust[i][1]] = 1;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			trust_mat[0][i] += trust_mat[j][i];
			trust_mat[i][0] += trust_mat[i][j];
		}
	}
	for (int i = 1; i <= n; i++)
		if ((trust_mat[0][i] == n - 1) && (trust_mat[i][0] == 0))
			return i;
	return -1;

}
#endif