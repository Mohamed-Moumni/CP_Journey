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

int is_prime(int a)
{
    int sq = (int)sqrt(a);
    for (int i=2;i<=sq;i++)
    {
        if (a % i == 0)
            return (0);
    }
    return (1);
}

void solve(void)
{
    int n,m;cin>>n>>m;
    int count =0;
    if (is_prime(m) == 0)
    {
        cout << "NO" << ln;
        return ;
    }
    else
        count++;
    for (int i=m-1;i > n;i--)
    {
        if (is_prime(i))
            count++;
    }
    if (count == 1)
        cout << "YES" << ln;
    else
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