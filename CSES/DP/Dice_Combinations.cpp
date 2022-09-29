#include<iostream>
#include<vector>

using namespace std;
const int mod = (int)1e9 + 7;

long long solve(long long n, vector<long long> &values, vector<bool> &ready)
{
    if (n < 0)
        return (-1);
    if (n == 0)
        return (1);
    if (ready[n])
        return (values[n]);
    long long counts = 0;
    long long ret;
    for (long long i=1;i<=6;i++)
    {
        ret = solve(n - i, values, ready);
        if (ret >= 0)
            counts += ret;
    }
    values[n] = counts % mod;
    ready[n] = true;
    return (values[n]);
}

int signed main(void)
{
    long long n;cin>>n;
    vector<long long> values(n+1,0);
    vector<bool> ready(n+1, false);
    cout << (solve(n,values, ready))<< "\n";
    return (0);
}