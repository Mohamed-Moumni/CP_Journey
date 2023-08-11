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
    cin >> s1 >> s2;
    if (s1.Z != s2.Z)
    {
        cout << "NO" << endl;
    }
    else
    {
        int i=0;
        vector<pair<char, char> > mp;
        int count = 0;
        while (i<s1.Z)
        {
            if (s1[i] != s2[i])
            {
                if (mp.Z)
                {
                    if (s1[i] == mp[0].second && s2[i] == mp[0].first)
                    {
                        mp.pop_back();
                        count++;
                    }
                    else
                        break ;
                }
                else
                    mp.push_back(make_pair(s1[i], s2[i]));;
            }
            i++;
        }
        if (mp.Z == 0 && count < 2)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
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

