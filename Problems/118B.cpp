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

void    print_mid(int n)
{
    int i = 0;
    int sp,c,z;

    while (i < n)
    {
        sp = n - (i + 1);
        z = i + 1;
        c = n - sp - 2;
        if (c < 0)
            c = 0;
        REP(j,0,sp/2)
            cout << " ";
        REP(j,0,z/2)
            cout << "0 ";
        REP(j,1,n/2)
            cout << j << " ";
        cout << n/2 << " ";
        for (int j=n/2 -1;j>=1;j--)
            cout << j << " ";
        for(int j=z/2 - 1;j>=0;j--)
            cout << "0 ";
        for (int j=sp/2 - 1; j>= 0;j--)
            cout << " ";
        cout << ln;
        i++;
    }
}
void solve(void)
{
    int n;cin>>n;
    print_mid(2*n + 1);
}

signed main(void)
{
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}