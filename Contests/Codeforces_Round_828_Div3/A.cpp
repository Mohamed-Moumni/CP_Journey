#include <bits/stdc++.h>

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
    vi a(n);
    map <int,int > mp1;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        mp1[a[i]]++;
    }
    string s;cin>>s;
    map <char , int > mp2;
    for (int i=0;i<n;i++)
    {
        mp2[s[i]]++;
    }
    int check = 0;
    map<int, int> ::iterator it = mp1.begin();
    map<char ,int> :: iterator it2 = mp2.begin();
    for (; it != mp1.end() && it2 !=mp2.end();it++, it2++)
    {
        if (it->second > 1)
        {
            if (it2->second < it->second)
            {
                cout << "NO" << ln;
                return ;
            }
        }
    }
    cout << "YES" << ln;
    // for (auto u:mp2)
    // {
    //     check = 0;
    //     for (auto v:mp1)
    //     {
    //         if (v.second >= u.second)
    //         {
    //             v.second = v.second - u.second;
    //             break ;
    //             check = 1;
    //         }
    //     }
    //     if (check == 0)
    //     {
    //         cout << "NO" << ln;
    //         return ;
    //     }
    // }
    // for (auto u:mp1)
    // {
    //     cout << u.first << " " << u.second << ln;
    // }
    // cout << "YES" << ln;
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