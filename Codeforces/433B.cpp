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
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> prefSum(n + 1,0);
    vector<ll> prefSumSor(n + 1,0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        prefSum[i + 1] = v[i] + prefSum[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0;i<n;i++)
    {
        prefSumSor[i + 1] = v[i] + prefSumSor[i];
    }
    ll m;cin >>m;
    int a,b,c;
    for (int i = 0; i < m ; i++)
    {
        cin >> a >> b >> c;
        if (a == 1)
        {
            cout << prefSum[c] - prefSum[b - 1] << endl;
        }
        if (a == 2)
        {
            cout << prefSumSor[c] - prefSumSor[b - 1] << endl;
        }
    }
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
