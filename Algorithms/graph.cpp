#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

void solve(void)
{
    long long n,t;
    int pos = 1;

    cin >> n >> t;
    vector<long long> tab(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> tab[i];
    }
    long cur = 1;
    do
    {
        cur = cur + tab[cur - 1];
        if (cur == t)
        {
            cout << "YES\n";
            return ;
        }
    } while (cur < n);
    cout << "NO\n";
}

int main(void)
{
    solve();
}