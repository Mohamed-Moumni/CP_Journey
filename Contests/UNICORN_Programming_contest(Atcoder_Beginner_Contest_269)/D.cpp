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


void    dfs(int v, map<int, vector<int> > &adj, map<int , bool>  &visited)
{
    if (!visited[v])
    {
        visited[v] = true;
        for (auto u:adj[v])
        {
            if (!visited[u])
            {
                dfs(u, adj, visited);
            }
        }
    }
}


void solve(void)
{
    ll n;cin>>n;
    map<int, vector<int> > mp;
    map<int , bool> visited;
    ll a,b;
    for (ll i=0;i<n;i++)
    {
        cin >> a >> b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    ll res =0;
    for (auto u:mp)
    {
        if (visited[u.first] == false)
        {
            res++;
            dfs(u.first, mp, visited);
        }
    }
    cout << res << ln;
}

signed main(void)
{
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}