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
#define MAX(x, y) ((x>y)?x:y)

ll w,h,n;

ll  good(ll mid)
{
    if ((mid/w) * (mid/h) >= n)
        return 1;
    return 0;
}

signed main(void)
{
    ios::sync_with_stdio(false);
	cin.tie(0);

    cin >> w >> h >> n;
    ll l,r,mid;
    l = 0;
    r = 1;
    while (!(((r / w) * (r / h)) >= n))
        r *= 2;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (good(mid))
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l << ln;
}