#include<bits/stdc++.h>
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
    int index = -1;
    for (int i = s.Z; i >= 0 ;i--)
    {
        if (s[i] == '0')
            index = i;
    }
    if (index != -1)
        s.erase(index, 1);
    else
        s.erase(0, 1);
    cout << s << endl;
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
