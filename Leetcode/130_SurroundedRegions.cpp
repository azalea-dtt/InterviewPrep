#include "Header.h"
#if 0
Given an m x n matrix board containing 'X' and 'O', capture all regions that are 4 - directionally surrounded by 'X'.
A region is captured by flipping all 'O's into 'X's in that surrounded region.
#endif


#if TEST130

vector<vector<int>> direction{ {-1,0},{1,0},{0,-1},{0,1} };
bool isBoundary(int r, int c, int nrow, int ncol)
{
	if (r == 0 || r == nrow - 1 || c == 0 || c == ncol - 1)
		return true;
	return false;
}
bool isValid(int r, int c, int nrow, int ncol)
{
	if (r >= 0 && r <= nrow - 1 && c >= 0 && c <= ncol - 1)
		return true;
	return false;
}
#if 0
void visit(vector<vector<int>>& area, vector<vector<bool>>& visited, vector<int> startPoint, int& bound_count, vector<vector<char>>& board)
{
	if (!isValid(startPoint[0], startPoint[1], board.size(), board[0].size())) return;
	if (board[startPoint[0]][startPoint[1]] == 'X' || visited[startPoint[0]][startPoint[1]] == true) return;
	if (isBoundary(startPoint[0], startPoint[1], board.size(), board[0].size())) bound_count++;
	//set startPoint to be a visited point
	visited[startPoint[0]][startPoint[1]] = true;
	area.push_back(startPoint);
	for (int i = 0; i < 4; i++)
	{
		int nb_r = startPoint[0] + direction[i][0];
		int nb_c = startPoint[1] + direction[i][1];
		vector<int> nb{ nb_r, nb_c };
		visit(area, visited, nb, bound_count, board);
	}

}


void solve(vector<vector<char>>& board)
{
	int nrow = board.size();
	int ncol = board[0].size();
	vector<vector<bool>> visited(nrow, vector<bool>(ncol, false));
	vector<vector<int>> area;
	
	int bound_count = 0;

	for (int i = 0; i < nrow; i++) {
		for (int j = 0; j < ncol; j++)
		{
			// flip area if there's no boundary cell
			if (area.size() > 0 && bound_count == 0)
			{
				for (int k = 0; k < area.size(); k++)
				{
					vector<int> pos = area[k];
					board[pos[0]][pos[1]] = 'X';
				}

			}
			// check if the point value is 'O' and not visited --> visited point and add to area
			if (board[i][j] == 'O' && visited[i][j] == false)
			{
				area.clear();
				bound_count = 0;
				vector<int> startPoint{i,j};
				visit(area, visited, startPoint, bound_count, board);
			}
		}
	}
	return;

}
#endif
void visit(vector<vector<bool>>& visited, vector<int> startPoint, bool flip, vector<vector<char>>& board)
{
	if (!isValid(startPoint[0], startPoint[1], board.size(), board[0].size())) return;
	if (board[startPoint[0]][startPoint[1]] == 'X' || visited[startPoint[0]][startPoint[1]] == true) return;
	
	//set startPoint to be a visited point
	visited[startPoint[0]][startPoint[1]] = true;
	if (flip) board[startPoint[0]][startPoint[1]] = 'X';
	for (int i = 0; i < 4; i++)
	{
		int nb_r = startPoint[0] + direction[i][0];
		int nb_c = startPoint[1] + direction[i][1];
		vector<int> nb{ nb_r, nb_c };
		visit(visited, nb, flip, board);
	}

}
void solve(vector<vector<char>>& board)
{
	int nrow = board.size();
	int ncol = board[0].size();
	vector<vector<bool>> visited(nrow, vector<bool>(ncol, false));
	
	bool flip = false;
	for (int c = 0; c < board[0].size(); c++) {
		vector<int> startPoint_up{ 0,c };
		visit(visited, startPoint_up, flip, board);
		vector<int> startPoint_down{ nrow-1,c };
		visit(visited, startPoint_down, flip, board);

	}
	for (int r = 0; r < board.size(); r++) {
		vector<int> startPoint_left{ r,0 };
		visit(visited, startPoint_left, flip, board);
		vector<int> startPoint_right{ r,ncol-1 };
		visit(visited, startPoint_right, flip, board);

	}

	flip = true;
	for (int i = 1; i < nrow-1; i++) {
		for (int j = 1; j < ncol-1; j++)
		{
			
			// check if the point value is 'O' and not visited --> visited point and add to area
			if (board[i][j] == 'O' && visited[i][j] == false)
			{
				vector<int> startPoint{ i,j };
				visit(visited, startPoint, flip, board);
			}
		}
	}
	return;

}


#endif