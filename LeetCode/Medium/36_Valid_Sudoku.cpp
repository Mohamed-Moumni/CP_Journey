#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool    check_row(int index, char value, vector<vector<char> >& board)
{
    int count = 0;
    for (int i = 0; i < 9; i++)
    {
        if (board[index][i] == value)
            count++;
    }
    if (count > 1)
        return (true);
    return (false);
}

bool check_col(int index, char value, vector<vector<char> >& board)
{
    int count = 0;
    for (int i = 0; i < 9; i++)
    {
        if (board[i][index] == value)
            count++;
    }
    if (count > 1)
        return (true);
    return (false);
}

bool check_square(char value, int index_x, int index_y, vector<vector<char> >& board)
{
    int count = 0;
    for (int i = index_x;i < index_x; i++)
    {
        for (int j  = index_y;j < index_y; j++)
        {
            if (board[i][j] == value)
                count++;
        }
    }
    if (count > 1)
        return (true);
    return (false);
}

int position(int value)
{
    if (value == 1)
        return (0);
    if (value == 2)
        return (3);
    if (value == 3)
        return (6);
    return (-1);
}
bool isValidSudoku(vector<vector<char> >& board)
{
    int index_x,index_y;
    char c = '.';
    int i = 0;
    int j = 0;
    for ( i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (board[i][j] != '.')
            {
                if (check_row(i, board[i][j], board))
                    return (false);
                if (check_col(j, board[i][j], board))
                    return (false);
                index_x = position(((i+1) / 3 )+ ((i+1) % 3));
                index_y = position(((j+1) / 3 )+ ((j+1) % 3));
                if (check_square(board[i][j], index_x, index_y, board))
                    return (false);
                
            }
        }
    }
    return (true);
}

int main(void)
{
    vector<vector<char> > tab {{'5','3','.','.','7','.','.','.','.'},
                                {'6','.','.','1','9','5','.','.','.'},
                                {'.','9','8','.','.','.','.','6','.'},
                                {'8','.','.','.','6','.','.','.','3'},
                                {'4','.','.','8','.','3','.','.','1'},
                                {'7','.','.','.','2','.','.','.','6'},
                                {'.','6','.','.','.','.','2','8','.'},
                                {'.','.','.','4','1','9','.','.','5'},
                                {'.','.','.','.','8','.','.','7','9'}};
    
    if (isValidSudoku(tab))
        cout << "True" << endl;
    else
        cout << "False" << endl;
return (0);
}