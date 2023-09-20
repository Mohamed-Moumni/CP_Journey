class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        double sum = 0;
        double ans;
        int size = nums.size();
        int left = 0;
    
        for (int i = 0; i < k; i++)
            sum += nums[i];
        ans = sum / k;
        while(left + k < size)
        {
            sum += nums[left+k] - nums[left];
            ans = ans < sum / k ? sum / k : ans;
            left++;
        }
        return (ans);
    }
};