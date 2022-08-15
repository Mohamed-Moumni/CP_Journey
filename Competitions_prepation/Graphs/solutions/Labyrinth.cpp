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

    cin >> n >> m;
    vector<string> inp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> inp[i];
    }
    vector<int> tab(n*m);
    vector<vector<int> >adj(n*m);
    int start = 1e9;
    int end = 1e9;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (inp[i][j] == '.' || inp[i][j] == 'A')
            {
                if (inp[i][j] == 'A')
                {
                    tab[i*m + j] = 0;
                    start = i*m + j;
                }
                else
                    tab[i*m + j] = 1e9;
                for (int k = 0; k < 4; k++)
                {
                    if (valid(i+dx[k], 0, n) && valid(j+dy[k], 0, m) && (inp[i+dx[k]][j+dy[k]] != '#'))
                    {
                        adj[i*m+j].PB((i+dx[k])*m + j + dy[k]);
                    }
                }
            }
            else
            {
                if (inp[i][j] == 'B')
                    end = i*m + j;
                tab[i*m + j] = 1e9;
            }
        }

    vector<int> prev(n*m);
    int i = start;
        queue<int> kyou;
        kyou.push(i);
        while(kyou.size() > 0)
        {
            int frt = kyou.front();
            kyou.pop();
            for (int x: adj[frt])
            {
                    if (tab[frt] + 1 < tab[x])
                    {
                        kyou.push(x);
                        tab[x] = tab[frt] + 1;
                        prev[x] = frt;
                    }
            }
        }
        string ans;
        int ku = end;
        if (end != 1e9 &&tab[end] == 1e9)
        {
            cout << "NO" << "\n";
            return (1);
        }
        else
            cout << "YES\n";
        while (ku != start)
        {
            if (abs(prev[ku] - ku) == m)
            {
                if (prev[ku] < ku)
                    ans += "D";
                else
                    ans += "U";
            }
            else
            {
                if (prev[ku] > ku)
                    ans += "L";
                else
                    ans += "R";
            }
            ku = prev[ku];
        }
        reverse(ans.begin(), ans.end());
        cout << tab[end] << "\n";
        cout << ans << endl;
}
