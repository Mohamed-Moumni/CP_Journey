#include<iostream>
#include<vector>
#include<set>

using namespace std;

// test cases
// nums1 : [1,2,3,3]
// nums2 : [1,1,2,2]

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<bool> b1(2001, 0);
        vector<bool> b2(2001, 0);
        vector<vector<int>> ans(2);
        for (auto num: nums1)
            b1[num + 1000] = 1;
        for (auto num: nums2)
            b2[num + 1000] = 1;
        for (int i = 0; i < 2001; i++)
        {
            if (b1[i] && b1[i] != b2[i])
                ans[0].push_back(i - 1000);
            else if (b2[i] && b1[i] != b2[i])
                ans[1].push_back(i - 1000);
        }
        return ans;
    }
};

int main(void)
{
    Solution s;

    vector<int> nums1, nums2;

    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(3);

    nums2.push_back(1);
    nums2.push_back(1);
    nums2.push_back(2);
    nums2.push_back(2);
    vector<vector<int>> ans = s.findDifference(nums1, nums2);
    for (int i = 0; i < ans[0].size(); i++)
        cout << ans[0][i] << " ";
    cout << endl;
    for (int i = 0; i < ans[1].size(); i++)
        cout << ans[1][i] << " ";
}