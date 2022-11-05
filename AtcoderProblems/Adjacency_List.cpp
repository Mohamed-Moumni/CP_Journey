#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void)
{
    int n,m;cin>>n>>m;

    vector<vector<int> > adj(n);
    int a,b;
    for (int i=0;i<m;i++)
    {
        cin >> a >> b;
        a--;b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i=0;i<n;i++)
    {
        cout << adj[i].size() << " ";
        sort(adj[i].begin(), adj[i].end());
        for (int j=0;j<adj[i].size();j++)
        {
            cout << adj[i][j]+1 << " ";
        }
        cout << "\n";
    }
}