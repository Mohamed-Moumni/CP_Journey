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
    vi b(n);
    int count = 0;

    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for (int i=0;i<n;i++)
    {
        cin >> b[i];
    }
    int a_ones = 0;
    int b_ones = 0;
    for (int i=0;i<n;i++)
    {
        if (a[i] != b[i])
            count++;
        if (a[i] == 1)
            a_ones++;
        if (b[i] == 1)
            b_ones++;
    }
    if (count == 0)
        cout << "0" << ln;
    else
    {
        if (a_ones == b_ones)
        {
            cout << "1" << ln;
        }
        else
        {
            if (abs(a_ones - b_ones) == a.Z)
                cout << abs(a_ones - b_ones) << ln;
            else if (abs(a_ones - b_ones) != count)
                cout << abs(a_ones - b_ones) + 1 << ln;
            else
                cout << abs(a_ones - b_ones) << ln;
        }
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