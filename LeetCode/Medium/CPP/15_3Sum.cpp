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
            if (i > 0 && nums[i] == nums[i-1])
                continue ;
            int a,b;
            a = i + 1;
            b = size - 1;
            while (a < b)
            {
                if (nums[i] + nums[a] + nums[b] == 0)
                {  
                    if (b < size - 1 && nums[a] == nums[a - 1] && nums[b] == nums[b + 1])
                    ;
                    else
                        result.push_back({nums[i],nums[a],nums[b]});
                    a++;
                    b--;
                }
                if (nums[i] + nums[a] + nums[b] < 0)
                    a++;
                else if (nums[i] + nums[a] + nums[b] > 0)
                    b--;
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