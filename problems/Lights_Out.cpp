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

void    func(vector<vector<int> > &tab, int a, int i, int j)
{
            if (a % 2)
            {
                if (tab[i][j] == 0)
                    tab[i][j] = 1;
                else
                    tab[i][j] = 0; 
            }
}
void solve(void)
{
    vector<vector<int> > tab(3);
    for (int i=0;i<3;i++)
    {
        tab[i] = vector<int> (3);
        for (int j=0;j<3;j++)
        {
            tab[i][j] = 1;
        }
    }
    int a;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cin >> a;
            func(tab, a, i,j);
            if (j < 2)
                func(tab, a,i,j+1);
            if (j > 0)
                func(tab, a, i, j-1);
            if (i > 0)
                func(tab,a, i -1,j);
            if (i < 2)
                func(tab,a,i+1,j);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << tab[i][j];
        }
        cout << "\n";
    }
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