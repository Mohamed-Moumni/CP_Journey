#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int size = nums.size();
        unordered_map<int, int> mp;
        mp[0] = -1;
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += nums[i];
            if (k != 0)
            {
                sum %= k;
            }
            if (mp.count(sum))
            {
                if (i - mp[sum]> 1)
                    return true;
            }
            else
                mp[sum] = i;
        }
        return (false);
    }
};

int main(void)
{
    Solution s;
    vector<int> nums;

    nums.push_back(23);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(6);
    nums.push_back(7);

    if (s.checkSubarraySum(nums, 6))
        cout << "True\n";
    else
        cout << "False\n";
    return (0);
}