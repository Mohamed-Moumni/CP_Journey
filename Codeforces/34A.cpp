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
    vi a(n);
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int min = 80000;
    int j,k;
    for (int i=0;i<n;i++)
    {
        if (i < n - 1 && (abs(a[i] - a[i+1])) < min)
        {
            min = abs(a[i] - a[i + 1]);
            j = i;
            k = i+1;
        }
    }
    if (abs(a[n-1] - a[0]) < min)
    {
        min = abs(a[n-1] - a[0]);
        j = n-1;
        k = 0;
    }
    cout << j + 1 << " " << k + 1 ;
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