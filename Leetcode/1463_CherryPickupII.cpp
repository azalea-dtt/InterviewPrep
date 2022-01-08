#include "Header.h"
#include <algorithm>
#if TEST1463
bool isValid(int col1, int col)
{
	if (col1 >= 0 && col1 < col) return true;
	return false;
}
int cherryPickup(vector<vector<int>>& grid)
{
	//dynamic programming
	int row = grid.size();
	int col = grid[0].size();

	// use 3 dimention arrays for dp
	// row --> n row of grid
	// col --> 2 dimention array of cols of two robots

	vector<vector<vector<int>>> dp(row, vector<vector<int>>(col, vector<int>(col, 0)));
	vector<int> direction{ -1,0,1 };
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			for (int k = 0; k < col; k++) {
				dp[i][j][k] = -1;
			}
		}
	}
	int col1 = 0; // robot 1 in col 0
	int col2 = col-1; // robot 2 in col-1
	dp[0][col1][col2] = grid[0][col1] + grid[0][col2];
	int maxPick = dp[0][col1][col2];
	for (int i = 1; i < row; i++) {
		for (int c1 = 0; c1 < col; c1++) {
			for (int c2 = 0; c2 < col; c2++) {
				int prev = dp[i - 1][c1][c2];
				if (prev >= 0)
				{
					for (auto dir1 : direction)
					{
						col1 = dir1 + c1;
						for (auto dir2 : direction) {
							col2 = dir2 + c2;
							if (isValid(col1, col) && isValid(col2, col)) {
								dp[i][col1][col2] = max(dp[i][col1][col2], prev + (col1 == col2 ? grid[i][col1] : (grid[i][col1] + grid[i][col2])));
								maxPick = max(dp[i][col1][col2], maxPick);
							}
						}
					}
				}
			}
		}
	}


	return maxPick;
}
#endif