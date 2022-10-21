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
    int t,sx,sy,ex,ey;cin>>t>>sx>>sy>>ex>>ey;
    string s;cin>>s;
    int move=0,move2=0;
    move += abs(sy - ey);
    move2 += abs(sx - ex);
    if (sy < ey)
    {
        int i =0;
        if (sx < ex)
        {
            for (;i<s.Z;i++)
            {
                if (s[i] == 'E')
                    move2--;
                if (s[i] == 'N')
                    move--;
                if (move2 == 0 && move == 0)
                    break;
            }
            if (i != s.Z)
                cout << i + 1 << ln;
            else
                cout << "-1" << ln;
        }
        else
        {
            for (;i<s.Z;i++)
            {
                if (s[i] == 'W')
                        move2--;
                if (s[i] == 'N')
                        move--;
                if (move == 0 && move2 == 0)
                    break;
            }
            if (i != s.Z)
                cout << i + 1 << ln;
            else
                cout << "-1" << ln;
        }
    }
    else
    {
        int i =0;
        if (sx < ex)
        {
            for (;i<s.Z;i++)
            {
                if (s[i] == 'E')
                    move2--;
                if (s[i] == 'S')
                    move--;
                if (move2 == 0 && move == 0)
                    break;
            }
            if (i != s.Z)
                cout << i + 1 << ln;
            else
                cout << "-1" << ln;
        }
        else
        {
            for (;i<s.Z;i++)
            {
                if (s[i] == 'W')
                        move2--;
                if (s[i] == 'S')
                        move--;
                if (move == 0 && move2 == 0)
                    break;
            }
            if (i != s.Z)
                cout << i + 1 << ln;
            else
                cout << "-1" << ln;
        }
    }
}

signed main(void)
{
    ll t = 1;
//    cin >> t;
    while (t--)
    {
        solve();
    }
}

