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
    vector<pair<int, int> > vec;
    int a,b;
    for (int i=0;i<n;i++)
    {
        cin >> a >> b;
        vec.push_back(make_pair(a,b));
    }
    int h,d,e,f;
    int ans = 0;
    for (int i=0;i<n;i++)
    {
        h =0;d=0;e=0;f=0;
        for (int j=0;j<n;j++)
        {
            if (vec[i].first > vec[j].first && vec[i].second == vec[j].second)
                h++;
            if (vec[i].first < vec[j].first && vec[i].second == vec[j].second)
                d++;
            if (vec[i].first == vec[j].first && vec[i].second < vec[j].second)
                e++;
            if (vec[i].first == vec[j].first && vec[i].second > vec[j].second)
                f++;
        }
        if (d && h && e && f)
            ans++;
    }
    cout << ans << ln;
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