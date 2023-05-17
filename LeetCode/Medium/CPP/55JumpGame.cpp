#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int length = nums.size() - 1;
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            if (i + nums[i] >= length)
                length = i;
        }
        if (length == 0)
            return (true);
        return false;
    }
};

int main(void)
{
    Solution s;
    vector<int> vec(5) = {2, 3, 1, 1, 4};
    if (s.canJump(vec))
        cout << "He can jump\n";
    else
        cout << "No he can't jump\n";
    return(0);
}