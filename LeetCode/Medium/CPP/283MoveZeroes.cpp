class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        int right = 1;
        int size = nums.size();

        if (nums.size() < 2)
            return;
        
        while (left < size && nums[left] != 0)
            left++;
        
        right = left + 1;

        while (right < size)
        {
            if (nums[right] != 0)
            {
                nums[left] = nums[right];
                nums[right] = 0;
                left++;
            }
            right++;
        }        
    }
};
