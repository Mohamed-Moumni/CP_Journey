#include<iostream>
#include<vector>
#include<map>

using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k)
{
    map<int, int> mp;
    for (int i = 0; i < k; i++)
        mp[nums[i]]++;
    int i = 0,j = i + k;
    while (j < nums.size())
    {
        if (auto u = mp.begin(); u !- )
            if (u.second > 1)
                return (true);
        mp[nums[i]]--;
        j++;
        if (j < nums.size())
            mp[nums[j]]++;
    }
    return (false);
}

int main(void)
{
    vector<int> vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(1);
    cout << containsNearbyDuplicate(vect, 3) << endl;
    return (0);
}