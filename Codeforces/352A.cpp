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
    int n;cin>>n;
    vi zeros;
    vi fives;
    int a;
    int sum = 0;
    REP(i, 0, n)
    {
        cin >> a;
        if (a == 0)
            zeros.push_back(a);
        else
        {
            fives.push_back(a);
            sum += a;
        }
    }
    REP(i, 0, n)
    {
        if (sum % 9 == 0)
            break ;
        else
            sum = sum - 5;
    }
    if ((sum == 0 && zeros.size() == 0) || (sum && zeros.size() == 0))
        cout << "-1" << ln;
    else if (sum == 0 && zeros.size())
        cout << "0" << ln;
    else
    {
        while (sum > 0)
        {
            cout << "5";
            sum -= 5;
        }
        REP(i,0,zeros.size())
            cout << "0";
        cout << ln;
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