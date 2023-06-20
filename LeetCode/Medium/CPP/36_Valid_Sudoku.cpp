#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9] = {0};
        bool col[9][9] = {0};
        bool square[9][9] = {0};

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                    int number = board[i][j] - '0' - 1;
                    int squarePos = i / 3 * 3 + j / 3;
                    if (row[i][number] || col[j][number] || square[squarePos][number])
                        return false;
                    else
                        row[i][number] = col[j][number] = square[squarePos][number] = 1;
                }
            }
        }
        return true;
    }
};

int main(void)
{
    vector<vector<char> > tab = {{'5','3','.','.','7','.','.','.','.'},
                                {'6','.','.','1','9','5','.','.','.'},
                                {'.','9','8','.','.','.','.','6','.'},
                                {'8','.','.','.','6','.','.','.','3'},
                                {'4','.','.','8','.','3','.','.','1'},
                                {'7','.','.','.','2','.','.','.','6'},
                                {'.','6','.','.','.','.','2','8','.'},
                                {'.','.','.','4','1','9','.','.','5'},
                                {'.','.','.','.','8','.','.','7','9'} };
    Solution s;
    if (s.isValidSudoku(tab))
        cout << "True\n";
    else
        cout << "False\n";
    return (0);
}