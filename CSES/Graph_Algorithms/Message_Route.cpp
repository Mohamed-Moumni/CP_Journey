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

signed  main(void)
{
    int n,m,a,b;

    cin >> n >> m;
    vector<vector<int> > adj(n);

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<bool> visited(n);
    vector<int> routes(n);
    vector<int> prev(n);
    routes[0] = 0;
    for (int i = 1; i < n; i++)
    {
        routes[i] = 1e9;
    }
    queue<int> kyou;
    kyou.push(0);
    while (kyou.size() > 0)
    {
        int frt = kyou.front();
        kyou.pop();
        for (int u: adj[frt])
        {
            if (routes[frt] + 1 < routes[u])
            {
                kyou.push(u);
                routes[u] = routes[frt] + 1;
                prev[u] = frt;
            }
        }
    }
    if (routes[n - 1] == 1e9)
    {
        cout << "IMPOSSIBLE" << endl;
        return (0);
    }
    else
    {
        vector<int> ans;
        cout << routes[n - 1] + 1 << endl;
        ans.push_back(n);
        int f;
        f = prev[n - 1];
        for (int i = 0; i < routes[n - 1]; i++)
        {
            ans.push_back(f + 1);
            f = prev[f];
        }
        reverse(ans.begin(), ans.end());
        for (int i = 0; i < routes[n - 1] + 1; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}