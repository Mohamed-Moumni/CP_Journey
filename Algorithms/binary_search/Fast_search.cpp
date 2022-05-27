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



ll  low_bound(vi &vect, ll n, ll a)
{
    ll l,r;

    l = -1;
    r = n;
    while (r > l + 1)
    {
        ll mid;
        mid = (l + r)/2;
        if (vect[mid] >= a)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    return (r);
}

ll  up_bound(vi &vect, ll n, ll b)
{
    ll l,r;

    l = -1;
    r = n;
    while (r > l + 1)
    {
        ll mid;
        mid = (l + r)/2;
        if (vect[mid] <= b)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    return (r);
}

signed  main(void)
{
    ll n;

    cin >> n;
    vi vect(n);
    REP(i, 0, n)
    {
        cin >> vect[i];
    }
    sort(vect.B,vect.E);
    ll t;
    cin >> t;
    while (t--)
    {
        ll l,r;

        cin >> l >> r;
        printf("%lld ",(up_bound(vect, n,r) - low_bound(vect, n,l)));
    }
}