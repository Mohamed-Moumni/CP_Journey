#include<iostream>
#include<vector>
#include<map>

using namespace std;

bool isValidSudoku(vector<vector<char> >& board) {
        for (int i = 1; i < 9; i +=3)
        {
            map<int, int> mp;
            for (int j = 1; j < 9 ; j += 3)
            {
                if (board[i][j] != '.')
                    mp[board[i][j] - '0']++;
                if (board[i][j-1] != '.')
                    mp[board[i][j-1] - '0']++;
                if (board[i][j+1] != '.')
                    mp[board[i][j+1] - '0']++;
                if (board[i+1][j] != '.')
                    mp[board[i+1][j] - '0']++;
                if (board[i-1][j] != '.')
                    mp[board[i-1][j] - '0']++;
                if (board[i+1][j+1] != '.')
                    mp[board[i+1][j+1] - '0']++;
                if (board[i-1][j-1] != '.')
                    mp[board[i-1][j-1] - '0']++;
                if (board[i-1][j+1] != '.')
                    mp[board[i-1][j+1] - '0']++;
                if (board[i+1][j-1] != '.')
                    mp[board[i+1][j-1] - '0']++;
                for (auto u:mp)
                    if (u.second > 1)
                        return (false);
            }
        }
        for (int i = 0;i <9;i++)
        {
            map<int, int > mp;
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                    mp[board[i][j] - '0']++;
            }
            for (auto u:mp)
                if (u.second > 1)
                    return (false);
        }
        for (int i = 0;i <9;i++)
        {
            map<int, int > mp;
            for (int j = 0; j < 9; j++)
            {
                if (board[j][i] != '.')
                    mp[board[j][i] - '0']++;
            }
            for (auto u:mp)
                if (u.second > 1)
                    return (false);
        }
        return (true);
}

int main(void)
{
    vector<vector<char>> tab;
    
    tab.push_back(vector<char>{'5','3','.','.','7','.','.','.','.'});
    tab.push_back(vector<char>{'6','.','.','1','9','5','.','.','.'});
    tab.push_back(vector<char>{'.','9','8','.','.','.','.','6','.'});
    tab.push_back(vector<char>{'8','.','.','.','6','.','.','.','3'});
    tab.push_back(vector<char>{'4','.','.','8','.','3','.','.','1'});
    tab.push_back(vector<char>{'7','.','.','.','2','.','.','.','6'});
    tab.push_back(vector<char>{'.','6','.','.','.','.','2','8','.'});
    tab.push_back(vector<char>{'.','.','.','4','1','9','.','.','5'});
    tab.push_back(vector<char>{'.','.','.','.','8','.','.','7','9'});
return (0);
}