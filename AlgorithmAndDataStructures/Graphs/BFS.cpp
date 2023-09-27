#include<iostream>
#include<vector>
#include<queue>

using namespace std;

#define N 5

vector<bool> visited(N);
vector<int> adj[N];

void bfs(int node)
{
    queue<int> bfsQueue;

    bfsQueue.push(node);
    while (bfsQueue.size() > 0)
    {
        int v = bfsQueue.front();
        bfsQueue.pop();
        if (!visited[v])
        {
            visited[v] = true;
            cout << v << " ";
            for (auto w : adj[v])
            {
                if (!visited[w])
                    bfsQueue.push(w);
            }
        }
    }
}

int main(void)
{
    adj[0] = {1, 2, 3};
    adj[1] = {3};
    adj[2] = {2};
    adj[3] = {4};
    adj[4] = {};
    bfs(0);
    return (0);
}