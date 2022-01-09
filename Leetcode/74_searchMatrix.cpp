#include "Header.h"
#if TEST74
vector<int> convertSeqToRC(int seq, int ncol)
{
	int r = seq / ncol;
	int c = seq % ncol;
	vector<int> rc(2,0);
	rc[0] = r;
	rc[1] = c;
	return rc;
}
int convertRCToSeq(int row, int col, int ncol)
{
	int seq = ncol * row + col;
	return seq;
}
void binarySearch(vector<vector<int>>& matrix, int l, int r, int target, int& seq)
{
	if (l > r) return;
	
	int mid = l + (r - l) / 2;
	int ncol = matrix[0].size();
	vector<int> rc = convertSeqToRC(mid, ncol);
	if (target == matrix[rc[0]][rc[1]]) {
		seq = mid;
		return;
	}
	if (target > matrix[rc[0]][rc[1]])
	{
		// go right
		l = mid + 1;
		
	}
	else {
		// go left
		r = mid - 1;
	}
	binarySearch(matrix, l, r, target, seq);
}
bool searchMatrix(vector<vector<int>>& matrix, int target) {
	int nrow = matrix.size();
	int ncol = matrix[0].size();

	int l = 0;
	int r = nrow * ncol - 1;
	int seq = -1;
	binarySearch(matrix, l, r, target, seq);
	cout << "seq:" << seq << endl;
	if (seq >= 0 && seq < nrow * ncol) return true;
	return false;
}
#endif