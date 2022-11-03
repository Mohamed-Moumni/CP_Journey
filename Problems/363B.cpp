#include<iostream>
#include<vector>

using namespace std;

typedef long long ll;
int main(void)
{
    ll n,k;cin >> n>>k;
    vector<ll> vec(n);
    for (int i=0;i<n;i++)
    {
        cin >> vec[i];
    }
    ll sum = 0;
    ll min = 0;
    ll min_value;
    for (int i=0;i<k;i++)
    {
        sum += vec[i];
    }
    min_value = sum;
    if (k == 1)
    {
        for (int i=0;i<n;i++)
        {
            if (min_value > vec[i])
            {
                min_value = vec[i];
                min = i;
            }
        }
    }
    else
    {
    for (int i = 1;i <= n - k;i++)
    {
        if ((sum - vec[i - 1] + vec[i + k - 1])  < min_value)
        {
            min = i;
            min_value = sum - vec[i-1] + vec[i + k -i];
        }
    }
    }

    cout << min + 1 << "\n";
}