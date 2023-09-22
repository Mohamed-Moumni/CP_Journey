class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zeros = 0;
        int ans = 0;
        int left = 0;
        int right = 0;
        int size = nums.size();
        while (right < size)
        {
            zeros += (nums[right] == 0) ? 1 : 0;
            while (zeros > 1)
            {
                if (nums[left] == 0)
                    zeros--;
                left++;
            }
            ans = max(ans, right - left + 1);
            right++;
        }
        return (ans - 1);
    }
};
