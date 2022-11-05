#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;

int main(void)
{
    ll n;cin>>n;
    vector<ll> a;
    bool check = false;
    int k;
    for (int i=0;i<n;i++)
    {
        cin >> k;
        if (k % 2 != 0 && k % 3 != 0 && k != 1)
            check = true;
    }
    if (check)
    {
        cout << "-1" << endl;
        return 1;
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    for (int i=0;i<n;i++)
    {
        if (a[i] % 2 == 0)

    }
}