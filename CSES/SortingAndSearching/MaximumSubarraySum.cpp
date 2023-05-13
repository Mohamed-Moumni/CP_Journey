#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    int n;cin>>n;
    vector<long long> vec(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    long long maxSum = -INT32_MAX;
    long long Currsum = 0;
    for (long long i = 0; i < n; i++)
    {
        Currsum = max(vec[i], vec[i] + Currsum);
        maxSum = max(maxSum, Currsum);
    }
    cout << maxSum << endl;
    return (0);
}