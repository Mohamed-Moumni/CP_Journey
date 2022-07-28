// is x a square ?

#include<iostream>
#include<vector>

using namespace std;

void    binary_search(long *tab, long n, long number)
{
    long l,r,mid;

    l = 0;
    r = n - 1;
    while (l <= r)
    {
        mid = l + (r-l)/2;
        if (number == tab[mid])
        {
            cout << "YES\n";
            return ;
        }
        if (tab[mid] >= number)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << "NO\n";
}

int main(void)
{
    long n,k;
    long t;

    cin >> n >> k;
    long tab[n];
    for (long i = 0; i < n ; i++)
    {
        cin >> tab[i];
    }
    for (long i = 0; i < k; i++)
    {
        cin >> t;
        binary_search(tab, n, t);
    }
    return (0);
}