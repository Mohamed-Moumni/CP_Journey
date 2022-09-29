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
    int n,m;cin>>n;
    vi a(n);
    for (int i=0;i<n;i++)
        cin >> a[i];
    cin>>m;
    vi b(m);
    for (int i=0;i<m;i++)
        cin>>b[i];
    sort(a.B, a.E);
    sort(b.B,b.E);
    cout << a[n-1] << " " << b[m - 1] << ln;
}

signed main(void)
{
    ll t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}