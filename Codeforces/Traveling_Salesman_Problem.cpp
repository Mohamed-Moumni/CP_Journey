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
    int n;
    int a;
    int b; 
    vpi tab;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cin >> b;
        tab.PB(MP(a,b));
    }
    sort(tab.begin(), tab.end());
    int ans = 0;
    ans += abs(tab[0].first);
    ans += abs(tab[0].second);
    for (int i = 1; i < n; i++)
    {
        ans += abs(tab[i - 1].first - tab[i].first);
        ans += abs(tab[i - 1].second - tab[i].second);
    }
    ans += abs(tab[n - 1].first);
    ans += abs(tab[n - 1].second);
    cout << ans << "\n";
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