#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
    long n,m;

    cin >> n >> m;
    vector<long> a(n);
    vector<long> b(m);
    for (long d = 0; d < n; d++)
    {
        cin >> a[d];
    }
    for (long f = 0; f < m; f++)
    {
        cin >> b[f];
    }
    vector<long> res(m);
    long i,j;
    i = 0;
    for (j = 0; j < b.size(); j++)
    {
        while (i < a.size() && a[i] < b[j])
        {
            i++;
        }
        cout << i << " ";
    }
    // for (int i = 0; i < m; i++)
    // {
    //     cout << res[i] << " ";
    // }
    return (0);
}