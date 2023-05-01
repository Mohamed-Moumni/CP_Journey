#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size();
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < size; i++)
        {
            if (i && nums[i] == nums[i-1])
                continue ;
            int a,b;
            int target = 0 - nums[i];
            int prev = -1000002;
            a = i + 1;
            b = size - 1;
            while (a < b)
            {
                int sum = nums[a] + nums[b];
                if (sum < target)
                    a++;
                else if (sum > target)
                    b--;
                else if (prev != nums[a])
                {
                    result.push_back({nums[a], nums[b], nums[i]});
                    prev = nums[a];
                    a++;
                    b--;
                }
                else
                {
                    a++;
                    b--;
                }
            }
        }
        return result;   
    }
};

int main(void)
{
    Solution s;

    vector<vector<int> > res;
    vector<int> nums = {-4,-1,-1,0,1,2};
    res = s.threeSum(nums);
    for (int i = 0; i < res.size(); i++)
    {
        for (auto u:res[i])
            cout << u << " ";
        cout << '\n';
    } 
    return (0);
}