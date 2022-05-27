#include<iostream>
#include<vector>

using namespace std;


void    binary_search(long *tab, long n, long number)
{
    long l,r,mid;
    
    l = -1;
    r = n;
    while (r > l + 1)
    {
        mid = (l + r) / 2;
        if (tab[mid] >= number)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << r + 1 << "\n";
}

int main(void)
{
    long n,k;

    cin >> n >> k;
    long tab[n];
    for (long i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    long t;
    for (long i = 0; i < k; i++)
    {
        cin >> t;
        binary_search(tab, n, t);
    }
}