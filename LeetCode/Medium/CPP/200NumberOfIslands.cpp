#include<iostream>
#include<vector>

using namespace std;

class Solution
{
public:

    void dfs(int u, vector<vector<int>> &adj, vector<bool> & visited)
    {
        if (visited[u])
            return;
        visited[u] = true;
        for (auto v : adj[u])
        {
            dfs(v, adj, visited);
        }
    }

    int numIslands(vector<vector<char>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int islands = 0;
        vector<vector<int>> adj(n * m);
        vector<bool> visited(n * m, false);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '1')
                {
                    if (j + 1 < m && grid[i][j + 1] == '1')
                    {
                        adj[i * m + j].push_back((i * m) + j + 1);
                        adj[(i * m) + j + 1].push_back(i * m + j);
                    }
                    if (i + 1 < n && grid[i + 1][j] == '1')
                    {
                        adj[i * m + j].push_back((i + 1) * m + j);
                        adj[(i + 1) * m + j].push_back(i * m + j);
                    }
                }
            }
        }
        for (int i = 0; i < n * m; i++)
        {
            if (grid[i / m][i % m] == '1' && !visited[i])
            {
                dfs(i, adj, visited);
                islands++;
            }
        }
        return islands;
    }
};

int main(void)
{
    vector<vector<char>> gird = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}};

    Solution s;

    cout << s.numIslands(gird) << endl;
    return (0);
}