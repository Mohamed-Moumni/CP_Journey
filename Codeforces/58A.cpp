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

int check_word(string &s, int i)
{
    while (s[i] && s[i] != 'h')
        i++;
    if (s[i] !='h')
        return (i);
    while (s[i] && s[i] != 'e')
        i++;
    if (s[i] != 'e')
        return (i);
    while (s[i] && s[i] != 'l')
        i++;
    if (s[i] != 'l')
        return (i);
    i++;
    while (s[i] && s[i] != 'l')
        i++;
    if (s[i] != 'l')
        return (i);
    while (s[i] && s[i] != 'o')
        i++;
    if (s[i] != 'o')
        return (i);
    return (0);
}

void solve(void)
{
    string s;cin>>s;
    int i=0;
    int ret;
    while (i < s.Z)
    {
        ret = check_word(s, i);
        if (ret == 0)
        {
            cout << "YES" << ln;
            return ;
        }
        else
        {
            i = ret;
        }
    }
    cout << "NO" << ln;
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