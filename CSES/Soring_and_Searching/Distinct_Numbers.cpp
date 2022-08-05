#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void)
{
    long n;

    cin >> n;
    vector <int> tab(n);
    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    sort(tab.begin(), tab.end());
    int ans = 0;
    for (int j = 0; j < n - 1; j++)
    {
        if (tab[j] != tab[j + 1])
            ans++;
    }
    ans++;
    cout << ans << "\n";
}