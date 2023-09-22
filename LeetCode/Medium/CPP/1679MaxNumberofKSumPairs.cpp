class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        int oper = 0;
        int start = 0, end = nums.size() - 1;

        sort(nums.begin(), nums.end());
        while (start < end)
        {
            if (nums[start] + nums[end] == k)
            {
                oper++;
                end--;
                start++;
            }
            else if (nums[end] + nums[start] > k)
                end--;
            else
                start++;
        }
        return oper;
    }
};