#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        map<int, int, std::greater<int> > mp;
        for (int i = 0; i< k;i++)
            mp[nums[i]]++;
        ans.push_back(mp.begin()->first);
        for (int i = 0;i < nums.size() - k; i++)
        {
            mp[nums[i]]--;
            if (mp[nums[i]] == 0)
                mp.erase(nums[i]);
            mp[nums[i+k]]++;
            ans.push_back(mp.begin()->first);
        }
        return (ans);
    }
};

int main(void)
{
    Solution s;

    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    vector<int> ans = s.maxSlidingWindow(nums, 3);
    for (auto u:ans)
        cout << u << " ";
    cout << endl;
    return (0);
}