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
    ll resu;

    resu = 0;
    cin >> n;
    vi tab(n);
    std::set<int> myset;
    std::set<int>::iterator it;
    std::pair<std::set<int>::iterator,bool> ret;
    for (int i = 0 ;i < n; i++)
    {
        cin >> tab[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        ret = myset.insert(tab[i]);
        if (ret.second == false)
        {
            resu = i + 1;
            break ;
        }
    }
    cout << resu << "\n";
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