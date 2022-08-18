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
    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    int i = 0;
    while (i < n)
    {
        if ((i + 1) < n && tab[i] > tab[i + 1])
            ans++;
        i++;
    }
    cout << (ans) << "\n";
}