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
    int n;cin >> n;
    vi d(n);
    int count =0;
    for (int i=0;i<n;i++)
    {
        cin >> d[i];
        if (d[i] == 0)
            count++;
    }
    if (count == n)
    {
        for (int i=0;i<n;i++)
        {
            cout << "0";
            if (i < n-1)
                cout << " ";
        }
        cout << ln;
        return ;
    }
    vi a(n);
    a[0] = d[0];
    int c,b;
    int check = 0;
    for (int i=1;i<n;i++)
    {
        c = a[i-1] - d[i];
        b = d[i] + a[i - 1];
        if (c >= 0 && b >= 0 && b != c)
        {
            check = 2;
            a[i] = min(b,c);
        }
        else
        {
            a[i] = b;
        }
    }
    if (check == 2)
    {
        cout << "-1" << ln;
    }
    else
    {
        for (int i=0;i<a.Z;i++)
        {
            cout << a[i];
            if (i < a.Z - 1)
                cout << " ";
        }
        cout << ln;
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