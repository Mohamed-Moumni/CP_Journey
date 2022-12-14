#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;cin >> s;
    string ans;ans = "";
    ans += s;
    reverse(s.begin(), s.end());
    ans += s;
    cout << ans << endl;
    return (0);
}