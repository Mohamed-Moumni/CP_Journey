#include <iostream>
#include <complex>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
#define ln '\n'


#define B begin()

#define E end()

void solve(void)
{
    int n;cin>>n;
    vi a(n);
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    if (n < 2)
    {
        cout << "0" << ln;
        return ;
    }
    sort(a.B,a.E);
    int ans = 1;
    int j = n - 2;
    for (int i = 1; i < n;i++)
    {
        if (a[i] == -1)
            break ;
        if (a[i] - 1 != a[i-1])
        {
                a[j] = -1;
                if (a[i - 1] + 1 > a[i])
                    a[i] = a[i - 1] + 1;
                else
                    a[i - 1] = a[i - 1] + 1;
                j--;
                ans++;
        }
        else
        {
            ans++;
        }
    }
    cout << ans << ln;
}

signed main(void)
{
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}