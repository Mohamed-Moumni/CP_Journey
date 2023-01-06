#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
    long long n;cin>>n;
    vector<int> arr(n);
    for (long long i = 0;i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 2; i++)
    {
        if (arr[i] + arr[i + 1] > arr[i + 2] && arr[i] + arr[i+2] > arr[i + 1] && arr[i+2] + arr[i+ 1] > arr[i])
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return (0);
}