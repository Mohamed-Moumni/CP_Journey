#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int main(void)
{
    long long n;
    long long a;
    long long b;

    vector<pair<long long , long long> > tab;

    cin >> n;
    for (int i = 0; i < n ; i++)
    {
        cin >> a;
        cin >> b;
        tab.push_back(make_pair(a, 1));
        tab.push_back(make_pair(b, -1));
    }
    sort(tab.begin(), tab.end());
    long long res = 0;
    long long max = 0;
    vector<pair<long long, long long> > :: iterator it;
    for (it=tab.begin(); it != tab.end(); it++)
    {
        res += it->second;
        if (res >= max)
            max = res;
    }
    cout << max << "\n";
    return (0);
}