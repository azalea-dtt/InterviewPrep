#include "Header.h"
#include <set>
#if TEST36
bool isValidSudoku(vector<vector<char>>& board) {
	unordered_map<int, int> row_map;
	vector<unordered_map<int, int>> col_map(9);
	unordered_map<int, int> cell_map;


	for (int i = 0; i < board.size(); i++) {
		// new row
		row_map.clear();
		for (int j = 0; j < board[0].size(); j++) {
			if (isdigit(board[i][j]) == false) continue;
			if (row_map.find(board[i][j]) != row_map.end()) {
				//cout << "row: " << i << ", col: " << j << endl;
				return false;
			}
			else {
				//if (isdigit(board[i][j]))
					row_map[board[i][j]] = 1;
			}
			if (col_map[j].find(board[i][j]) != col_map[j].end()) {
				//cout << "2. row: " << i << ", col: " << j << endl;
				return false;
			}
			else {
				//if (isdigit(board[i][j]))
					col_map[j][board[i][j]] = 1;
			}
		}
	}
	for (int cr = 0; cr < 3; cr++) {
		for (int cc = 0; cc < 3; cc++)
		{
			// init for each cell
			cell_map.clear();
			for (int r = 0; r < 3; r++) {
				for (int c = 0; c < 3; c++) {
					
					int r_idx = cr * 3 + r;
					int c_idx = cc * 3 + c;
					if (isdigit(board[r_idx][c_idx]) == false) continue;
					if (cell_map.find(board[r_idx][c_idx]) != cell_map.end()) {
						//cout << "3. row: " << r_idx << ", col: " << c_idx << endl;
						return false;
					}
					else {
						cell_map[board[r_idx][c_idx]] = 1;
					}
				}
			}
		}
	}


	return true;
}
#endif