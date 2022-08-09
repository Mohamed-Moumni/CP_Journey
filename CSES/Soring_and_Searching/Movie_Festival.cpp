#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool sortbysecond(const pair<long, long> &a, const pair<long, long> &b)
{
    return (a.second < b.second);
}

int main(void)
{
    long n;
    vector<pair<long, long> > tab;

    cin >> n;
    long a;
    long b;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cin >> b;
        tab.push_back(make_pair(a, b));
    }
    sort(tab.begin(), tab.end(), sortbysecond);
    long res = 0;
    long endOfLastMovie = -1;
    for (int i = 0; i < n; i++)
    {
        if (tab[i].first >= endOfLastMovie)
        {
            res++;
            endOfLastMovie = tab[i].second;
        }
    }
    cout << res << "\n";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << tab[i].first << " " << tab[i].second << "\n";
    // }
    return (0);
}