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

void    solve(void)
{
    int n;cin>>n;
    vector<vector<int> > a(n + 1);
    for (int i=0;i<n+1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            a[i].push_back(j);
        }
        int k;
        k = i - 1;
        while (k>=0)
        {
            a[i].push_back(k);
            k--;
        }
    }
    int d = n;
    for (int i=0;i<n+1;i++)
    {
        for (int k=0;k<d*2;k++)
            cout << " ";
        for (int j=0;j<a[i].Z;j++)
        {
            cout << a[i][j];
            if (j < a[i].Z - 1)
                cout << " ";
        }
        d--;
        cout << ln;
    }
    d = 1;
    for (int i=n - 1;i>=0;i--)
    {
        for (int k=0;k<d*2;k++)
            cout << " ";
        for (int j=a[i].Z - 1;j >= 0;j--)
        {
            cout << a[i][j];
            if (j > 0)
                cout << " ";
        }
        d++;
        cout << ln;
    }
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