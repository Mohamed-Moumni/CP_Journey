#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void)
{
    long long n;

    cin >> n;
    vector<long long> tab(n);
    for (long long i =0; i < n; i++)
    {
        cin >> tab[i];
    }
    sort(tab.begin(), tab.end());
    long long res = 0;
    for (long long i = 0; i<n ;i++)
    {
        if (res + 1 < tab[i])
            break ;
        res += tab[i];
    }
    cout << (res + 1) << "\n";
    return (0);
}