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

    int is_prime[10000003];

void solve(void)
{
    int a = 2;
    for (int i=2;i<10000003;i++)
    {
        is_prime[i] = a;
        a++;
    }
    vector<int> primes;
    int n;
    cin>>n;
    int d;
    for (int i = 2; i <= sqrt(10000000); i++)
    {
        d = 2;
        if (is_prime[i] != -1)
        {
            while (d * i < 10000003)
            {
                is_prime[d * i] = -1;
                d++;
            }
        }
    }
    for (int i=2; i < 10000003 ; i++)
    {
        if (is_prime[i] != -1)
            primes.push_back(is_prime[i]);
    }
    for (int i=0;i<n;i++)
    {
        cout << primes[i] << " ";
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
