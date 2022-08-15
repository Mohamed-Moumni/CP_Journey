#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void)
{
    int n;
    vector<long long> tab;

    cin >> n;
    long long a;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        tab.push_back(a);
    }
    long long past = 0;
    long long best_sum = -1e18;
    for (int i = 0 ; i < n; i++)
    {
        if (past + tab[i] >= tab[i])
        {
            past += tab[i];
        }
        else
            past = tab[i];
        if (best_sum < past)
            best_sum = past;
    }
    cout << best_sum << "\n";
    return (0);
}