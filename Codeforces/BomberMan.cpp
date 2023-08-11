#include<bits/stdc++.h>

using namespace std;

vector<string> bomberMan(int n, vector<string> grid) {
    int r = grid.size(), c = grid[0].size();
    int counter = 0;
    n--;
    while (n > 0)
    {
        if (counter == 0)
        {
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    if (grid[i][j] == 'O')
                    {
                        grid[i][j] = 'X';
                        counter = 1;
                    }
                    else
                        grid[i][j] = 'O';
                }
            }
        }
        else
        {
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    if (grid[i][j] == 'X')
                    {
                        grid[i][j] = '.';
                        if (i-1 >= 0 && grid[i-1][j] != 'X')
                            grid[i - 1][j] = '.';
                        if (i+i < r && grid[i+1][j] != 'X')
                            grid[i+1][j] = '.';
                        if (j-1 >= 0 && grid[i][j-1] != 'X')
                            grid[i][j-1] = '.';
                        if (j+1 < c && grid[i][j+1] != 'X')
                            grid[i][j+1] = '.';
                    }
                }
            }
            counter = 0;
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    if (grid[i][j] == 'X')
                    {
                        counter = 1;
                    }
                }
            }
        }
        n--;
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (grid[i][j] == 'X')
                grid[i][j] = 'O';
        }
    }
    return (grid);
}


int main(void)
{
    vector<string> arr = {
        ".......",
        "...O.O.",
        "....O..",
        "..O....",
        "OO...OO",
        "OO.O..."
    };
    arr = bomberMan(5, arr);
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 7;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}