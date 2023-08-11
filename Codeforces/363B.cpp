#include<bits/stdc++.h>


using namespace std;

typedef long long ll;
int main(void)
{
    long long n,k;cin>>n;cin>>k;
    vector<long long> prefxSum(n+1, 0);
    long long a;
    for (long long i = 0; i < n; i++)
    {
        cin >> a;
        prefxSum[i + 1] = a + prefxSum[i]; 
    }
    long long ans = 1;
    long long min = 1e9;
    for (long long i = 1; i <= n; i++)
    {
        if (i + k > n + 1)
            break;
        else
        {
            if (prefxSum[i+k-1] - prefxSum[i-1] < min)
            {
                min = prefxSum[i+k-1] - prefxSum[i-1];
                ans = i;
            }
        }
    }
    cout << ans << endl;
    return (0);
}