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

// void solve(void)
// {
    
// }

signed main(void)
{
    ll n,m;

    cin >> n >> m;

    vector<string> tab(n);
    vector<vector< int> > adj(n*m);

    REP(i,0,n)
    {
        cin >> tab[i];
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (tab[i][j] == '.')
            {
                for (int k = 0; k < 4; k++)
                {
                    if (valid(i+dx[k],0,n) && valid(j+dy[k], 0, m) && tab[i+dx[k]][j+dy[k]] == '.')
                    {
                        adj[i*m + j].PB((i+dx[k])*m + j+dy[k]);
                    }
                }
            }
        }
    // REP(i,0,n*m)    
    // {
    //     for (int z : adj[i])
    //         cout << "THERE IS AN EDGE BETWEEN " << "( " << i/m << ", " << i%m << ") " << "and " << z/m << " " << z%m << endl; 
    // }
    vector<bool> visited(n*m);
    int rooms = 0;
    for (int i = 0; i < n*m ; i++)
    {
        if (tab[i/m][i%m] == '.')
        {
            if (!visited[i])
            {
                queue<int> kyou;
                kyou.push(i);
                while (kyou.size() > 0)
                {
                    int frt = kyou.front();
                    kyou.pop();
                    visited[frt] = true;
                    for (int x: adj[frt])
                    {
                        if (!visited[x])
                        {
                            kyou.push(x);
                            visited[x] = true;
                        }
                    }
                }
                rooms++;
            }

        }
    }
    cout << rooms << "\n";
}