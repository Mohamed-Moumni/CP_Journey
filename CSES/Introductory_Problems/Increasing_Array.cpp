#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    long long n;cin>>n;
    vector<long long> vect(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> vect[i];
    }
    long long ans = 0;
    for (long long i = 1;i < n; i++)
    {
        if (vect[i] < vect[i-1])
        {
            ans += abs(vect[i] - vect[i - 1]);
            vect[i] += abs(vect[i] - vect[i - 1]);
        }
    }
    cout << ans << endl;
}