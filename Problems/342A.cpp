//#include "/Users/mmoumni/Desktop/bits-std-header/stdc++.h"
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
    int n;cin>>n;
    vector<int> a(n);
    REP(i, 0, n)
        cin >> a[i];
    sort(a.B, a.E);
    int sets = n / 3;
    vector<vector<int>> res(sets);
    bool ok = false;
    REP(i, 0, sets)
    {
        if (a[i + sets] > a[i] && a[i + sets] < a[i+sets + sets] && a[i + sets] % a[i] == 0 && a[i + sets + sets] % a[i + sets] == 0)
        {
            res[i].PB(a[i]);res[i].PB(a[i + sets]);res[i].PB(a[i + sets + sets]);
        }
        else
        {
            ok = true;
            break ;
        }
    }
    if (!ok)
    {
        REP(i, 0, sets)
        {
            REP(j,0,3)
                cout << res[i][j] << " ";
            cout << ln;
        }
    }
    else
        cout << "-1" << ln;
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

