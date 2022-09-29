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

string get_inf(int a)
{
    if (a == 0)
        return  "Power" ;
    else if (a == 1)
        return "Time" ;
    else if (a == 2)
        return "Space" ;
    else if (a == 3)
        return "Soul" ;
    else if (a == 4)
        return "Reality" ;
    else
        return "Mind" ;
}

void put(string s, vector<int> &ve)
{
    if (!s.compare("purple"))
        ve[0] = 1;
    else if (!s.compare("green"))
        ve[1] = 1;
    else if (!s.compare("blue"))
        ve[2] = 2;
    else if (!s.compare("orange"))
        ve[3] = 3;
    else if (!s.compare("red"))
        ve[4] = 4;
    else
        ve[5] = 5;
}

void solve(void)
{
    int n;cin>>n;
    map<string, string> mp;
    mp ["Power"] = "purple";
    mp ["Time"] = "green";
    mp ["Space"] = "blue";
    mp ["Soul"] = "orange";
    mp ["Reality"] = "red";
    mp ["Mind"] = "yellow";
    vector<int> a(6,0);
    int b;
    string s1;
    for (int i = 0; i < n; i++)
    {
        cin >> s1;
        put(s1, a);
    }
    string ans = "";
    int as = 0;
    for (int i =0;i<6;i++)
    {
        if (a[i] == 0)
        {
            as++;
        ans += get_inf(i);
        if (i < 5)
            ans += "\n";
        }
    }
    cout << as << ln;
    cout << ans <<ln;
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