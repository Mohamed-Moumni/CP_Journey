#include<iostream>

using namespace std;
typedef long long ll;

int main(void)
{
    ll n;cin >> n;
    ll sum = n*(n+1)/2;
    ll som = 0;
    ll a;
    for (ll i=0;i < n-1;i++)
    {
        cin >> a;
        som+=a;
    }
    cout << sum - som << endl;
}