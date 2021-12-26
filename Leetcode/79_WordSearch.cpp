#include "Header.h"
#include <set>


#if TEST79
set<pair<int, int>> visited;
bool dfs(vector<vector<char>> &board, string word, int r, int c, int pos/*, vector<vector<bool>> visited*/)
{
	
	//1. base case
	if (pos == word.length()) return true;
	//2. invalid r, c in board or the char in (r,c) is different with the char at word[pos]
	std::pair<int, int> cur(r, c);
	if (r < 0 || r >= board.size() || c < 0 || c >= board[0].size() || board[r][c] != word[pos]/* || visited.find(cur) != visited.end()*/)
		return false;
	//3. the board[r][c] == word[pos], so we find next char among 4 neighbor of board[r][c]
	//4 make sure we do not revisit the point
	//visited.insert(cur);
	char temp = board[r][c];
	board[r][c] = '*';
	bool ret = dfs(board, word, r+1,c,pos+1) || dfs(board, word, r-1, c, pos + 1) ||  dfs(board, word, r, c - 1, pos + 1) || dfs(board, word, r, c+1, pos + 1);
	board[r][c] = temp;
	//visited.erase(cur); // backtrack to make this point can be visited again in case we start from another point
	return ret;

}


bool exist(vector<vector<char>>& board, string word)
{
	int nrow = board.size();
	int ncol = board[0].size();
	int pos = 0;
	//vector<vector<bool>> visited(nrow, vector<bool>(ncol, false));
	
	for (int i = 0; i < nrow; i++)
	{
		for (int j = 0; j < ncol; j++)
		{
			
			if (board[i][j] == word[pos]) {
				//std::fill(visited.begin(), visited.end(), false);
				
				//if (dfs(board, word, i, j, pos, visited))
				if (dfs(board, word, i, j, pos))
					return true;
			}
		}
	}
	return false;
}
#endif