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

int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

void solve(void)
{
    int a,b,c;cin >>a>>b>>c;
    int t1 = abs(a-1);
    int t2 = abs(b-c) + abs(c -1);
    if (t1 < t2)
        cout << "1" << ln;
    else if (t1 > t2)
        cout << "2" << ln;
    else
        cout << "3" << ln;
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