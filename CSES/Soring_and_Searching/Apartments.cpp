#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void)
{
    long long n,m,k;

    cin >> n >> m >> k;
    vector<long long> appar(n);
    vector<long long> disappar(m);
    for (long long i =0; i < n; i++)
    {
        cin >> appar[i];
    }
    for (long long j = 0; j < m; j++)
    {
        cin >> disappar[j];
    }
    sort(appar.begin(), appar.end());
    sort(disappar.begin(), disappar.end());
    long long i = 0;
    long long j = 0;
    long long ans = 0;
    while (i < n && j < m)
    {
        if (appar[i] < disappar[j] - k)
        {
            i++;
        }
        else if (appar[i] > disappar[j] + k)
        {
            j++;
        }
        else
        {
            ans++;
            i++;
            j++;
        }
    }
    cout << ans << "\n";
}