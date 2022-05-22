#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
    long n;
    cin >> n;
    vector<long> tab(n);
    for(long i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    sort(tab.begin(), tab.end());
    long mid = tab[n/2];
    long res = 0;
    for (long i = 0; i < n; i++)
    {
        res += abs(mid - tab[i]);
    }
    cout << res << "\n";
}