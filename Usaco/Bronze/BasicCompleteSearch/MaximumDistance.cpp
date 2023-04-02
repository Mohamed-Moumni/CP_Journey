#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    long long n;
    cin >> n;
    vector<long long> x(n);
    vector<long long> y(n);
    long long a;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        x[i] = a;
    }
    for (int j = 0; j < n; j++)
    {
        cin >> a;
        y[j] = a;
    }
    long long maximum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n;j++)
        {
            maximum = max(maximum, (x[j] - x[i])*(x[j] - x[i]) + (y[j] - y[i]) * (y[j] - y[i]));
        }
    }
    cout << maximum << endl;
    return (0);
}