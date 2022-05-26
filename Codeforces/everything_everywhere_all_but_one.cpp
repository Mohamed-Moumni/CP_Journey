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

void solve(void)
{
    ll n;
    cin >> n;
    vi a(n);
    ll sum = 0;
    REP(i,0,n)
    {
        cin >> a[i];
        sum += a[i];
    }
    REP(i, 0,n)
    {
        if (sum == a[i] * n)
        {
            cout << "YES" << ln;
            return ;
        }
    }
    cout << "NO" << ln;
} 

signed main(void)
{
    long t;

    cin >> t;
    while (t--)
    {
        solve();
    }
}
