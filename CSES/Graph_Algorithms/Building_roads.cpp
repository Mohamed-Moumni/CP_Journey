#include <iostream>
#include <complex>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair <int,int> > vpi;
typedef vector<long long> vll;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;
#define F first
#define ln '\n'
#define S second
#define PB push_back
#define MP make_pair
#define B begin()
#define RB rbegin()
#define E end()
#define RE rend()
#define Z size()
#define REP(i,a,b) for (int i = a; i < b; i++)
#define L length()
#define valid(a,b,c) (a >= b && a < c ? 1 : 0)
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
const int mod = (int)1e9 + 7;
#define MAX 1e5
void dfs(int v,vector<vector<int> > &adj, vector<bool> &visited)
{
    visited[v] = true;
    for (int u: adj[v])
    {
        if (!visited[u])
            dfs(u,adj, visited);
    }
}

signed main(void)
{
    int n,m,a,b;

    cin >> n >> m;
    vector<vector<int> > adj(MAX);
    for (int i = 0 ; i < m; i++)
    {
        cin >> a >> b;
        a--;b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<bool> visited (MAX);
    vector<int> routes (MAX);
    int comp = 0;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            routes[comp] = i;
            comp++;
            dfs(i, adj, visited);
        }
    }
    cout << (comp - 1) << endl;
    for (int i = 0; i < comp - 1;i++)
    {
        cout << (routes[i] + 1) << " " << (routes[i + 1] + 1) << endl;
    }
    return (0);
}