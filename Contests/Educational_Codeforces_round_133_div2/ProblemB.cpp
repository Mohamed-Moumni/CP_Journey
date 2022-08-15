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

void solve()
{
    ll n;

    cin >> n;
    vector<ll> tab(n);
    ll i = 0;
    ll swap;
    while (i < n)
    {
        tab[i] = i + 1;
        i++;
    }
    i = 0;
    ll k;
    while (i < n)
    {
        k = 0;
        while (k < n)
        {
            cout << tab[k] << " ";
            k++;
        }
        cout << "\n";
        if (i < n - 1)
        {
            swap = tab[i];
            tab[i] = tab[n-1];
            tab[n-1] = swap;
        }
        i++; 
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