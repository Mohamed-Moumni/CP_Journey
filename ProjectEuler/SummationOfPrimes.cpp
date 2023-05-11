#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    int n = 2000000;
    vector<bool> vec(n + 1, true);
    vec[0] = false, vec[1] = false;
    long long sum = 0;
    for (int i = 2; i < n; i++)
    {
        if (vec[i] && (long long)i * i <= n)
        {
            for (int j = i * i; j < n; j += i)
                vec[i] = false;
        }
    }
    for (int i = 2; i< n; i++)
    {
        if (vec[i])
            sum += i;
    }
    cout << sum << endl;
    return (0);
} 