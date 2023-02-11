#include<iostream>
#include<vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
        int l,r,m;

        l = 0;
        r = nums.size() - 1;
        while (l <= r)
        {
            m = l + (r - l) / 2;
            if (nums[m] > target)
            {
                r = m - 1;
                if (r < 0)
                    return(0);
            }
            else
                l = m + 1;
        }
        if (nums[m] < target)
            return(m+1);
        if (nums[m] > target)
            return (m-1);
        return (m);
    }

int main(void)
{
    vector<int> nums;

    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(6);
    // cout << nums.size() <<endl;
    cout << searchInsert(nums, 5) << endl;
}