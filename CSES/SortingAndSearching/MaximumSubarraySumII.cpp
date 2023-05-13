#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    int n;cin>>n;
    int a,b; cin >> a >> b;
    vector<int> vec(n);
    vector<int> prefixsum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> vec[i];
        prefixsum[i] = prefixsum[i - 1] + vec[i];
    }
    int i = 1, j = b;
    int ans = -INT32_MAX;
    while (j <= n - b)
    {
        for (int k = i; k < i + b;k++)
            ans = max(ans, prefixsum[k] - prefixsum[i-1]);
        i++;
        j++;
    }
    cout << ans << endl;
    return (0);
}