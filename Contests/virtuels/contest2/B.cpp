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
    int k,m,n;

    cin >> k>>m>>n;
    int sum=0;
    vector<int> tab(n);
    for (int i=0;i<n;i++)
    {
        cin >> tab[i];
        sum += tab[i];
    }
    sort(tab.begin(), tab.end());
    if (k - sum >= m)
    {
        cout << "0" << ln;
    }
    else
    {
        int i = tab.size() - 1;
        int a = k - sum;
        int ans = 0;
        while (a < m)
        {
            a += tab[i];
            i--;
            ans++;
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