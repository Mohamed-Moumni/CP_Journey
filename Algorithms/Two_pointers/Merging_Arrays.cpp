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
    vector<long> c(n + m);
    for(long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(long i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    long i,j,k;

    i = 0;
    j = 0;
    k = 0;
    while (i < a.size() || j < b.size())
    {
        if (j == b.size() || (i < a.size() && a[i] <= b[j]))
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    for (long i = 0; i < k; i++)
    {
        cout << c[i] << " ";
    }
}