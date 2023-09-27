#include<iostream>
#include<vector>

using namespace std;

int component = 0;
vector<int> roads;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited)
{
    if (visited[node])
        return;
    visited[node] = true;
    for (auto u:adj[node])
        dfs(u, adj, visited);
}

int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<vector<int> > adj(n);
    vector<bool> visited(n, false);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i, adj, visited);
            component++;
            roads.push_back(i + 1);
        }
    }
    cout << component - 1 << endl;
    for (int i = 0; i < roads.size() - 1; i++)
    {
        cout << roads[i] << " " << roads[i + 1] << endl;
    }
    return (0);
}