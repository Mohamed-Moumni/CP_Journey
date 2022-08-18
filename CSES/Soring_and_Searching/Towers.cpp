#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    long long n;

    cin >> n;
    vector<long long > tab(n);
    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (tab[i] <= tab[i - 1])
        {
            ans++;
        }
    }
    cout << ans << "\n";
}