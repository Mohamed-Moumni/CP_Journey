#include<iostream>
#include<vector>

using namespace std;

bool    pos_valid(int y, int x)
{
    if (y >= 0 && y < 9 && x >= 0 && x < 9)
        return (true);
    return (false);
}

bool    check_neigbor(vector<vector<char>>& board, int y, int x)
{
    if (pos_valid(y-1,x))
        if (board[y][x] == board[y-1][x])
            return (false);
    if (pos_valid(y+1,x))
        if (board[y][x] == board[y+1][x])
            return (false);
    if (pos_valid(y1,x + 1))
        if (board[y][x] == board[y][x+1])
            return (false);
    if (pos_valid(y,x-1))
        if (board[y][x] == board[y][x-1])
            return (false);
    if (pos_valid(y-1,x-1))
        if (board[y][x] == board[y-1][x-1])
            return (false);
    if (pos_valid(y+1,x+1))
        if (board[y][x] == board[y+1][x+1])
            return (false);
    if (pos_valid(y-1,x+1))
        if (board[y][x] == board[y-1][x+1])
            return (false);
    if (pos_valid(y+1,x-1))
        if (board[y][x] == board[y+1][x-1])
            return (false);
    return (true);
}

bool    isValidSudoku(vector<vector<char>>& board)
{
    int i  = 0, j = 0;
    for (int j = 0; j < 9 ; j++)
    {
        for (int i = 0; i < 9 ; i++)
        {
            for (int k = i+1; k < 9;k++)
            {
                if (ps_valid(k,j) && board[j][k] != '.' && board[j][i] == board[j][k])
                    return (false);
            }
            for (int k = j+1; k < 9; k++)
            {
                if (pos_valid(k,i) && board[k][i] != '.' && board[j][i] == board[k][i])
                    return (false);
            }
            if (!check_neigbor(board, y, i))
                return (false);
        }
    }
    return (true);
}