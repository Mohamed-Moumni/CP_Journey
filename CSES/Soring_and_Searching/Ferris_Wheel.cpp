#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void)
{
    long long n,x;

    cin >> n >> x;
    vector<long long> tab(n);
    for (int i = 0 ; i < n; i++)
    {
        cin >> tab[i];
    }
    sort(tab.begin(), tab.end());
    long long ans = 0;
    if (tab[0] > x)
        cout << ans << "\n";
    else
    {
        long long i = 0;
        long long j = n - 1;
        while (i <= j)
        {
            if (tab[i] + tab[j] <= x)
            {
                ans++;
                i++;
                j--;
            }
            else
            {
                ans++;
                j--;
            }
        }
        cout << ans << "\n";
    }
}