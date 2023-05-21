#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        int minimum;
        while (i <= j)
        {
            if (nums[i] > nums[j])
            {
                minimum = nums[j];
                i++;
            }
            else
            {
                minimum = nums[i];
                j--;
            }
        }
        return minimum;
    }
};

int main(void)
{
    Solution s;

    vector<int> a{1,2,3,4,5,6};
    cout << s.findMin(a) << endl;
    return (0);
}