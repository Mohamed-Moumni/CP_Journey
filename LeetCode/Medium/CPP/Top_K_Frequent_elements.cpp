#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <set>
#include <unordered_map>
#include <queue>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k)
{
    unordered_map<int, int> mp;
    for(int x: nums) mp[x]++;
    priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (pair<int,int> p : mp)
    {
        pq.push({p.second , p.first});
        if (pq.size() > k)pq.pop();
    }
    vector<int> res;
    while (pq.size())
    {res.push_back(pq.top().second);pq.pop();}
    return (res);
}

int main(void)
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    vector<int> result;
    result = topKFrequent (nums, 2);
    for (auto u: result)
        cout << u << endl;
    return (0);
}