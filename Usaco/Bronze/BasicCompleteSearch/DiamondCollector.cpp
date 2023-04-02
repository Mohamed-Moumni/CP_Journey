#include <iostream>
#include <set>
#include <vector>
#include <utility>
#include <fstream>

using namespace std;

int main(void)
{
    long long n,k;
    freopen("diamond.in", "r", stdin);

    cin >> n >> k;
    long long b;
    vector<pair<long long, long> > nums;
    set<pair<long long, long long> > s;
    for (int i = 0; i < n;i++)
    {
        cin >> b;
        s.insert(make_pair(b, 0));
    }
    set<pair<long long, long long> >::iterator it;
    it = s.begin();
    for (; it != s.end(); it++)
    {
        nums.push_back(*it);
    }
    long long count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (abs(nums[i].first - nums[j].first) == k)
            {
                if (nums[i].second == 0)
                {
                    nums[i].second = 1;
                    count++;
                }
                if (nums[j].second == 0)
                {
                    nums[j].second = 1;
                    count++;
                }
            }
        }
    }
    freopen("diamond.out", "w", stdout);
    cout << count << endl;
    return (0);
}