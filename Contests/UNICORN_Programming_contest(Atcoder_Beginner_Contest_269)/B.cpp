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

void solve(void)
{
    int check_col=0, check_line=0;

    vector<string> str(10);
    for (int i=0;i<10;i++)
    {
        cin >> str[i];
    }
    int a=0,b=0,c=0,d=0;
    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10;j++)
        {
            if (!c && str[i][j] == '#' && !a)
            {
                a = i + 1;
                c = j + 1;
            }
            else if (str[i][j] == '#')
            {
                b = i + 1;
                d = j + 1;
            }
        }
    }
    cout << a << " ";
    if (b == 0)
        cout << a << ln;
    else
        cout << b << ln;
    cout << c << " ";
    if (d == 0)
        cout << c << ln;
    else
        cout << d << ln;
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