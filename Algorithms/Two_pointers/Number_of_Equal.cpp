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
    for(long i =0 ;i < n; i++)
    {
        cin >> a[i];
    }
    for (long i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    long res = 0;
    long i,j;
    i = 0;
    j = 0;
    while(i < a.size() && j < b.size())
    {
        if (a[i] == b[j])
            res++;
        if (i > 0 && j > 0 && i < n - 1 && j < m - 1)
        {
            if (a[i] == b[j - 1])
                res++;
            if (a[i] == b[j + 1])
                
        }
        i++;
        j++;
    }
    cout << res << "\n";
}