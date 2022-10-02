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
    int max = 0;
    // vi b(n);
    int ans = 0;
    int forst=0;
    int fire =0;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            forst++;
        else
            fire++;
    }
    vi b;
    vi c;
    int k;
    for (int i=0;i<n;i++)
    {
        cin >> k;
        if (a[i] == 0)
            b.push_back(k);
        else
            c.push_back(k);
    }
    sort(b.B,b.E);
    sort(c.B,c.E);
    if (forst == 0)
    {
        for (int i=0;i<c.Z;i++)
            ans += c[i];
        cout << ans << ln;
        return ;
    }
    if (fire == 0)
    {
        for (int i=0;i<b.Z;i++)
            ans += b[i];
        cout << ans <<ln;
        return ;
    }
    if (forst == fire)
    {
        if (b[0] < c[0])
        {
            ans += b[0];
            ans += 2*c[0];
        }
        else
        {
            ans += c[0];
            ans += 2*b[0];
        }
        for (int i=1;i<c.size();i++)
        {
            ans += 2 * c[i];
        }
        for (int i=1;i<b.size();i++)
        {
            ans += 2 * b[i];
        }
        cout << ans << ln;
    }
    else
    {
        int k;
        k = abs(forst - fire);
        k = k / 2;
        int g = k;
        for (int i = b.Z - 1;i>=0;i--)
        {
            if (k > 0)
            {
                ans += 2*b[i]; 
                k--;
            }
            else
                ans += b[i];
        }
        for (int i = c.Z - 1;i>=0;i--)
        {
            if (g > 0)
            {
                ans += 2*c[i]; 
                g--;
            }
            else
                ans += c[i];
        }
        cout << ans << ln;
    }
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