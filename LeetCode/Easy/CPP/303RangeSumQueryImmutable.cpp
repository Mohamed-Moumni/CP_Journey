class NumArray {
public:
    vector<int> _nums;
    NumArray(vector<int>& nums) {
        this->_nums.push_back(0);
        int size = nums.size();
        for (int i = 0; i < size; i++)
            _nums.push_back(_nums[i] + nums[i]);
    }
    
    int sumRange(int left, int right) {
        return (this->_nums[right + 1] - this->_nums[left]);
    }
};
