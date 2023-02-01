#include<iostream>
#include<vector>
#include<string>

using namespace std;

        bool isValidSudoku(vector<vector<char> >& board) {
            const int cnt = 9;
            bool row[cnt][cnt] = {false};
            bool col[cnt][cnt] = {false};
            bool sub[cnt][cnt] = {false};
            
            for(int r = 0; r < cnt; ++r){
                for(int c = 0; c < cnt; ++c){
                    if(board[r][c] == '.')
                        continue; // if not number pass
                    
                    int idx = board[r][c] - '0' - 1; //char to num idx
                    int area = (r/3) * 3 + (c/3);
                    
                    //if number already exists
                    if(row[r][idx] || col[c][idx] || sub[area][idx]){
                        return false;
                    }
                    
                    row[r][idx] = true;
                    col[c][idx] = true;
                    sub[area][idx] = true;
                }
            }
            for (int i = 0; i < 9;i++)
            {
                for (int j = 0; j < 9; j++)
                {
                    cout << row[i][j] << " ";
                }
                cout << endl;
            }
            cout << "--------------------------" << endl;
            for (int i = 0; i < 9;i++)
            {
                for (int j = 0; j < 9; j++)
                {
                    cout << col[i][j] << " ";
                }
                cout << endl;
            }
            cout << "--------------------------" << endl;
            for (int i = 0; i < 9;i++)
            {
                for (int j = 0; j < 9; j++)
                {
                    cout << sub[i][j] << " ";
                }
                cout << endl;
            }
            return true;
        }

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

    isValidSudoku(tab);
return (0);
}