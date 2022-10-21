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
    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);
    map<char, int> mp1;
    REP(i, 0, s1.Z)
    {
        if (s1[i] != ' ')
            mp1[s1[i]]++;
    }
    bool ok = false;
    REP(i, 0, s2.Z)
    {
        if (mp1[s2[i]])
        {
            mp1[s2[i]] = mp1[s2[i]] - 1;
        }
        else if (s2[i] != ' ')
        {
            ok = true;
            break ;
        }
    }
    if (ok)
        cout << "NO" << ln;
    else
        cout << "YES" << ln;
}

signed main(void)
{
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}

