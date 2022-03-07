#include "matrixluckynum.h"
#include <math.h>
vector<int> MatrixLuckyNum::luckyNumbers(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();
    vector<int> ans;
    vector<int> minRow (row, __INT_MAX__);
    vector<int> maxCol (col);

    for(int i = 0 ; i < row; i++){
        for(int j = 0; j < col ;j++){
            minRow[i] = min(minRow[i], matrix[i][j]);
            maxCol[j] = max(maxCol[j], matrix[i][j]);
        }
    }

    for(int i = 0; i <row; i++){
        for(int j = 0; j < col; j++)
        {
            if(minRow[i] == matrix[i][j] && maxCol[j] == matrix[i][j]){
                ans.push_back(matrix[i][j]);
            }
        }
    }

    return ans;
}