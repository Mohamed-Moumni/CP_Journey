#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

int main(void)
{
    long long n;cin>>n;
    map<int, int> mp;
    long long a;
    for (int i=0;i<n;i++)
    {
        cin >> a;
        mp[a]++;
    }
    bool check = false;
    for (auto u:mp)
    {
        if (u.second > (n+1)/2)
        {
            check = true;
            break;
        }
    }
    if (check)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}