#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int left,right;
        int area = 0;

        left = 0, right = height.size()-1;
        while (left <= right)
        {
            area = max(area, min(height[left],height[right]) * (right - left));
            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return area;
    }
};

int main(void)
{
    Solution s;
    vector<int> test = {1,8,6,2,5,4,8,3,7};
    int result = s.maxArea(test);
    cout << result << endl;
    return (0);
}