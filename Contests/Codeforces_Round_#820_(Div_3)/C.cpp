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
    string s1;cin>>s1;
    set<pair<int, int> > arr;
    for (int i=0;i<n;i++)
    {
        arr.insert(make_pair(i, s1[i]));
    }
    pair<int, int> pa=make_pair(0, s1[0]);
    pair<int, int> ta;
    vector<int> ans;
    ans.push_back(pa.first);
    int min = 1e9;
    int cost = 0;
    while (!arr.empty())
    {
        min = 1e9;
        for (auto u:arr)
        {
            if (u.first != pa.first && abs(pa.second - u.second) < min)
            {
                min = abs(pa.second - u.second);
                ta = u;
            }
        }
        cost += abs(pa.second - ta.second);
        arr.erase(pa);
        pa = ta;
        ans.push_back(ta.first);
    }
    cout << cost << " " << s1.size() << ln;
    for (int i = 0;i < ans.size();i++)
    {
        cout << ans[i];
        if (i < n-1)
            cout << " ";
    }
    cout << ln;
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