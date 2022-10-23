#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(void)
{
    ll n;cin>>n;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            cout << n;
            n /= 2;
        }
        else
        {
            cout << n;
            n = n * 3 + 1;
        }
        cout << " ";
    }
    cout << "1";
}
