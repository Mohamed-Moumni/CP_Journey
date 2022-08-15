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
const int mod = (int)1e9 + 7;


void    solve(void)
{
    ll n,h,m;
    ll a,b;
    ll ans;
    ll diff;

    cin >> n >> h >> m;
    ans = 123456789;
    while (n--)
    {
        cin >> a >> b;
        diff = (a*60 + b) - (h*60 + m);
        if (diff < 0)
            diff = diff + 1440;
        ans = min(ans, diff);
    }
    cout << ans / 60 << " " << ans % 60 << "\n";
}

signed main(void)
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}