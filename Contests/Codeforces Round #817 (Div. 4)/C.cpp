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
    int n;
    string str;

    cin >> n;
    vector<string> tab(n);
    for (int i = 0; i < n; i++)
    {
        for (int i = 0 ; i < 3; i++)
        {
            cin >> str;
            tab.push_back(str);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << tab[i] << endl;
    }
}

signed main(void)
{
    int t;

    cin >> t;
    while (t--)
    {
        solve();
    }
}