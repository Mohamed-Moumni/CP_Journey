#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

#define ll int64_t

int main(void)
{
    freopen("bcount.in", "r", stdin);
    ll n, q;cin>>n >> q;
    vector<vector<ll> > vect(n+1);
    for (ll i = 0; i <= n; i++)
        vect[i] = vector<ll> (3, 0);
    for (ll i = 1; i <= n; i++)
    {
        ll a;cin>>a;
        vect[i][0] = vect[i - 1][0];
        vect[i][1] = vect[i - 1][1];
        vect[i][2] = vect[i - 1][2];
        vect[i][a - 1] = vect[i - 1][a - 1] + 1;
    }
    freopen("bcount.out", "w", stdout);
    for (ll i = 0; i < q; i++)
    {
        ll a,b;cin>>a>>b;
        cout << vect[b][0] - vect[a-1][0] << " " << vect[b][1] - vect[a-1][1] << " " << vect[b][2] - vect[a-1][2] << "\n";
    }
    return (0);
}