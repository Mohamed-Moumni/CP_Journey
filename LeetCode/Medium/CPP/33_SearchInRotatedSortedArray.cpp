#include <bits/stdc++.h>

using namespace std;
int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int mid;
        while (nums[left] > nums[right])
        {
            mid = left + (right - left) / 2;
            left = mid + 1;
        }
        if (target >= nums[left] && target <= nums[nums.size() - 1])
            right = nums.size() - 1;
        else
        {
            right = left - 1;
            left = 0;
        }
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid;
            if (target < nums[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        return (-1);
    }

int main(void)
{
    vector<int> nums;

    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    cout << search(nums, 7) << endl;
    return (0);
}