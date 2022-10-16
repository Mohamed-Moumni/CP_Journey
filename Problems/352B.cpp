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
    vector<pair<int , int> > a;
    int b;
    for (int i=0;i<n;i++)
    {
        cin >> b;
        a.push_back(make_pair(b, i));
    }
    sort (a.B, a.E);
    int com = a[0].first;
    int i=0;
    int k = 0;
    int count = 0;
    int check = 0;
    vector<pair<int, int> > c;
    while (i < n)
    {
        i = i + 1;
        k = 0;
        count++;
        check = 0;
        while (i < n && a[i].first == com)
        {
            if (check == 0)
            {
                if (k == 0)
                    k = a[i].second - a[i-1].second;
                else
                {
                    if (a[i].second - a[i - 1].second != k)
                    {
                        k = 0;
                        count--;
                        check = 1;
                        break;
                    }
                }
            }
            i++;
        }
        if (!check)
            c.push_back(make_pair(a[i-1].first, k));
        // cout << a[i-1].first << " " << k << ln;
        if (i < n)
            com = a[i].first;
    }
    cout << count << ln;
    for (auto u:c)
    {
        cout << u.first << " " << u.second <<ln;
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