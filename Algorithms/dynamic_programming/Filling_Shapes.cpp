//#define Print 1
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

ll cache[61];

ll  solve(ll n)
{
    if (n % 2)
        return (0);
    cache[2] = 2;
    for (ll i = 4; i <= n; i = i+ 2)
    {
        cache[i] = cache[i - 2] * 2;
    }
    // REP(i, 0, n + 1)
    // {
    //     cout << cache[i] << "\n"; printing the tab
    // }
    return(cache[n]);
}

signed  main(void)
{
    ll n;

    cin >> n;
    cout << solve(n) << "\n";
    // solve(36);
    return(0);
}