#include<iostream>
#include<vector>
#include<set>

using namespace std;

int solve(vector<int> & vec, int k)
{
    long long  ans;
    long long sum = 0;
    for (int i = 0; i < k; i++)
        sum += vec[i];
    ans = sum;
    for (size_t i = 0; i < vec.size() - k; i++)
    {
        sum -= vec[i];
        sum += vec[i + k];
        if (ans < sum)
            ans = sum;
    }
    return (ans);
}

int main(void)
{
    int n,a,b;
    long long ans = -INT32_MAX;
    cin >> n >> a >> b;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];   
    }
    for (int i = a; i <= b;i++)
    {
        long long c = solve(vec,i);
        if (ans < c)
            ans = c;
    }
    cout << ans << endl;
    return (0);
}