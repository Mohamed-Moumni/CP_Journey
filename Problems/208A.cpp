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
    string s;cin>>s;
    string ans = "";

    int i = 0;
    int j =0;
    while (i < s.Z)
    {
        if (i < s.Z - 2 && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            s[i] = '0';
            s[i+1] = '0';
            s[i+2] = '0';
            i+=3;
        }
        else
        i++;
    }
    // cout << s <<ln;
    i = 0;
    while (i < s.Z)
    {
        if (s[i] && s[i] != '0')
        {
            if (j != 0)
                ans += " ";
            while (s[i] && s[i] != '0')
            {
                ans += string(1, s[i]); 
                j++;
                i++;
            }
        }
        else
            i++;
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