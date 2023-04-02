#include<bits/stdc++.h>
using namespace std;


void    solve(void)
{
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i= 0; i < n;i++)
    {
        cin >> h[i];
    }
    int i = 0;
    int diff = 0;
    while (i < n)
    {
        if (i < n && (i + 1) < n)
        {
            diff += (h[i] - h[i+1]);
        }
        i++;
    }

    if (diff >= 0)
        cout << h[0] << endl;
    else
    {
        cout << h[0] + abs(diff) << endl;
    }
}

int main(void)
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}