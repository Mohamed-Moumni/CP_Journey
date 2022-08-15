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

signed main(void)
{
    int n,m;
    int a,b;

    cin >> n >> m;
    vector<vector<int> >adj(n);

    for (int i = 0; i < m; i++)
    {
        cin >> a;
        cin >> b;
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<bool> visited (n);
    vector<int> teams (n);
    int index = 0;
    for (int i = 0; i < n; i++)
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
                teams[frt] = index;
                for (int x: adj[frt])
                {
                    if (!visited[x])
                    {
                        kyou.push(x);
                        visited[x] = true;
                    }
                }
            }
            index++;
        }
    }
    int check = 0;
    for (int i = 0; i< n; i++)
    {
        if (teams[i] == 1)
        {
            check = 1;
            break ;
        }
    }
    if (check == 0 || index > 1)
        cout << "IMPOSSIBLE\n";
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (teams[i] == 0)
                cout << "1 ";
            else
                cout << "2 ";
        }
        cout << "\n";
    }
}