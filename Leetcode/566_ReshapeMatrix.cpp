#include "Header.h"
#if TEST566
vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int i, j;
    int nrow = mat.size();
    int ncol = mat[0].size();
    int k = 0;
    int l = 0;

    vector<vector<int>> result(r, vector<int>(c, 0));
    if (c > 300) return mat;
    if (nrow * ncol != r * c) return mat;

    if (r == 0 || c == 0) return mat;

    for (i = 0; i < nrow; i++) {
        for (j = 0; j < ncol; j++) {
            result[k][l] = mat[i][j];
            l++;

            if (l == c) {
                k++;
                if (k == r) return result;
                l = 0;
            }
        }

    }
    return mat;

}
#endif