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
    string input;cin>>input;
    string ans = "";
    int c = 0;
    int i = n - 1;
    while (i >= 0)
    {
        c = 0;
        if (input[i] == '0')
        {
            c += input[i - 2] - '0';
            c = c * 10;
            c += input[i -1] - '0';
            i-=3;
        }
        else
        {
            c = input[i] - '0';
            i--;
        }
        ans += string(1, 97 + (c) - 1);
    }
    reverse(ans.begin(), ans.end());
    cout << ans << ln;
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