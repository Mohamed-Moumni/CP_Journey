#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
    long long n;

    cin >> n;
    long long ans = 0;
    vector<long long> tab(n);
    vector<long long> pos(n);
    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
        pos[tab[i]] = i;
    }
    int i = 0;
    while (i < n)
    {
        if (pos[i] > pos[i + 1])
            ans++;
        i++;
    }
    cout << (ans + 1) << "\n";
}