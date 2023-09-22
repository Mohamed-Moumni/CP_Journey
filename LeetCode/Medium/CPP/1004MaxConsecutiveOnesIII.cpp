class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int ans = 0;
        int size = nums.size();
        int left = 0, zeros = 0, right = 0;
        while (right < size)
        {
            zeros += (nums[right] == 0) ? 1 : 0;
            while (zeros > k)
            {
                zeros -= (nums[left] == 0) ? 1 : 0;
                left++;
            }
            ans = max(ans, right - left + 1);
            right++;
        }
        return ans;
    }
};