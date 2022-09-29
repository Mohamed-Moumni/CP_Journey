#include<iostream>
#include<vector>

using namespace std;


int solve(int n, vector<int> &value, vector<bool> &ready)
{
    if (n < 0)
        return (1e9);
    if (n == 0)
        return (0);
    if (ready[n])
        return (value[n]);
    int minimum = 1e9;
    for (int i=1;i<=6;i++)
    {
        minimum = min(minimum, solve(n - i,value, ready) + 1);
    }
    ready[n] = true;
    value[n] = minimum;
    return (value[n]);
}


int main(void)
{
    int n;cin>>n;
    vector<int> value(n+1,0);
    vector<bool> ready(n+1, false);
    cout << solve(n, value, ready);
}