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

void    dfs(int v, vector<vector<int> > &adj, vector<bool> &visited, vector<int> &subord)
{
    visited[v] = true;
    for (int u: adj[v])
    {
        if (!visited[u])
        {
            dfs(u, adj, visited, subord);
            subord[v] += subord[u] + 1;
        }
    }
}

signed main(void)
{
    ll n;

    cin >> n;
    vector<vector<int > >adj(n);
    int c;
    for (int i = 1; i < n; i++)
    {
        cin >> c;
        c--;
        adj[c].push_back(i);
    }
    vector<bool> visited(adj.size());
    vector<int> subord(n);
    dfs(0, adj, visited, subord);
    for (int i = 0; i < n; i++)
    {
        cout << subord[i] << " ";
    }
}