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
int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

void solve(void)
{
    int n;cin>>n;
    vector<pair<int, int> > a;
    int b;
    for (int i=0;i<n;i++)
    {
        cin >> b;
        a.push_back(b, i+1);
    }
    sort(a.B,a.E);
    // vi a(n);
    // REP(i,0,n)
    //     cin>>a[i];
    // int max = -1;
    // for (int i =0;i<n;i++)
    // {
    //     for (int j=0;j<n;j++)
    //     {
    //         if (gcd(a[i],a[j]) == 1)
    //         {
    //             if ((i + j + 2) > max)
    //                 max = (i + j + 2);
    //         }    
    //     }
    // }
    // cout << max << ln;
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