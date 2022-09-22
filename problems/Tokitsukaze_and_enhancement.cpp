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

void    prin(int a)
{

}
void solve(void)
{
    int n;cin>>n;
    vector<pair<char, int> > tab(4);
    tab[0].first = 'A';
    tab[0].second = 1;
    tab[1].first = 'B';
    tab[1].second = 3;
    tab[2].first = 'C';
    tab[2].second = 2;
    tab[3].first = 'D';
    tab[3].second = 0;
    int rem;
    rem = n%4;
    char ans;
    int state = 0;
    for (int i=0;i<4;i++)
    {
        if (tab[i].second == rem)
            ans = tab[i].first;
    }
    for (int i=0;i<4;i++)
    {
        if (tab[i].second == ((n+1)%4))
        {
            if (tab[i].first < ans)
            {
                state = 1;
                ans = tab[i].first;
            }
        }
    }
    for (int i=0;i<4;i++)
    {
        if (tab[i].second == ((n+2)%4))
        {
            if (tab[i].first < ans)
            {
                state = 2;
                ans = tab[i].first;
            }
        }
    }
    cout << state << " " << ans ;
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