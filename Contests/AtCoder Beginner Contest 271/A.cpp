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

char f(int n)
{
    if (n>= 0 && n <= 9)
        return ('0' + n);
    else if (n == 10)
        return ('A');
    else if (n == 11)
        return ('B');
    else if (n == 12)
        return ('C');
    else if (n == 13)
        return ('D');
    else if (n == 14)
        return ('E');
    else if (n == 15)
        return ('F');
    return (-1);
}
void solve(void)
{
    int n;cin>>n;
    string s = "";

    while (n > 0)
    {
        s = string (1,f(n%16)) + s;
        n = n / 16;
    }
    if (s.size() == 1)
    {
        s = "0" + s;
    }
    else if (s.size() == 0)
    {
        s += "00";
    }
    cout << s << ln;
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