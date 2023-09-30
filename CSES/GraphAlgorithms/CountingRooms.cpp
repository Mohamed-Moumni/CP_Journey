#include<iostream>
#include<vector>
#include<stack>

using namespace std;

#define valid(a, b, c) (a >= b && a < c ? 1 : 0)
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

void dfs(vector<vector<bool>> & visited,int i, int j, int size1, int size2)
{
    visited[i][j] = true;
    for (int k = 0; k < 4; k++)
    {
        if (valid(i + dx[k], 0, size1) && valid(j + dx[k], 0, size2) && !visited[i+ dx[k]][j + dy[k]])
            dfs(visited, i + dx[k], j + dy[k], size1, size2);
    }
}

int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> visited(n);
    vector<string> arr(n);
    int count = 0;

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        visited[i] = vector<bool>(m, false);
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '#')
                visited[i][j] = true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!visited[i][j])
            {
                dfs(visited, i, j, n, m);
                count++;
            }
        }
    }
    cout << count << endl;
    return (0);
}