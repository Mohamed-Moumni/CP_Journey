#include<iostream>
#include<string>
#include <cstdio>

using namespace std;

int main(void)
{
    freopen("breedflip.in", "r", stdin);
    int n;cin>>n;
    string h,g;cin>>h>>g;
    int i = 0;
    int start,end, ans = 0;
    while (i < n)
    {
        start = i;
        while (i < n && h[i] != g[i])
            i++;
        end = i;
        if (start != end)
            ans++;
        i++;
    }
    freopen("breedflip.out", "w", stdout);
    cout << ans << endl;
    return (0);
}