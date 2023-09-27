#include<iostream>
#include<vector>

using namespace std;

#define  N 3

bool visited[N];
vector<int> adj[N];

void dfs(int s)
{
    if (visited[s]) return ;
    visited[s] = true;
    for (auto u:adj[s])
    {
        dfs(u);
    }
}

int main(void)
{

    adj[0] = {1, 2, 4};
    adj[1] = {3, 4};
    adj[2] = {5};
    // iterate through all the nodes
    for (int i = 0; i < N; i++)
    {
        if(!visited[i])
            dfs(i);
    }
    return (0);
}