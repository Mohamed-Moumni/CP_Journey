#include<iostream>
#include<vector>

using namespace std;

class NumMatrix {
public:
    vector<vector<int>> _matrix;
    NumMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        for (int i = 1; i < row; i++)
            matrix[i][0] += matrix[i - 1][0];
        for (int i = 1; i < col; i++)
            matrix[0][i] += matrix[0][i - 1];
        for (int i = 1; i < row; i++)
        {
            for (int j = 1; j < col; j++)
            {
                matrix[i][j] += matrix[i-1][j] + matrix[i][j-1] - matrix[i - 1][j - 1];
            }
        }
        _matrix = matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
      
        int up = row1 == 0 ? 0 : this->_matrix[row1 - 1][col2];
        int left = col1 == 0 ? 0 : this->_matrix[row2][col1 - 1];
        int upleft = (row1 == 0 || col1 == 0) ? 0 : this->_matrix[row1 - 1][col1 - 1];
        return (this->_matrix[row2][col2] - left - up + upleft);
    }
};

