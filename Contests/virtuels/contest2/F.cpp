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
    int n,m;
    cin>>n>>m;
    cin.ignore();

    map<string, int> mp;
    string s1;
    int a;
    string insr;
    for (int i=0;i<n;i++)
    {
        insr = "";
        a = 0;
        getline(cin,s1);
        int k=0;
        for (;isalpha(s1[k]) || isspace(s1[k]) ;k++)
        {
            insr.push_back(s1[k]);
        }
        insr[k - 1] = '\0';
        while (s1[k] && s1[k] >= '0' && s1[k] <= '9')
        {
            a *= 10;
            a += s1[k] - '0';
            k++;
        }
        mp.insert(make_pair(insr, a));
    }
    // for (auto u:mp)
    // {
    //     cout << u.first << " " << u.second << ln;
    // }
    string s2;
    string in="",to="";
    set<int> set1;
    for (int i=0;i<m;i++)
    {
        getline(cin, s2);
        in = "";
        to = "";
        int j = 0;
        for (;s2[j] != '-';j++)
        {
            in.push_back(s2[j]);
        }
        s2[j - 1] = '\0';
        while (s2[j] == '-')
            j++;
        j+=2;
        while (s2[j])
        {
            to.push_back(s2[j]);
            j++;
        }
        s2[j - 1] = '\0';
        // set1.insert(mp.find(in)->second);
        // set1.insert(mp.find(to)->second);
        cout << mp.find(in)->second << ln;
    }
    int k = 1;
    int ans = 0;
    for (auto u:set1)
    {
        cout << u << ln;
        ans += k * u;
        k++;
    }
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