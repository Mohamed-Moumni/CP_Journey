#include<iostream>
#include<vector>

using namespace std;
// my first solution

// class Solution {
// public:
//     int trap(vector<int>& height)
//     {
//         int ans = 0;
//         int comp = height[0];
//         int count = 0;
//         int i = 1, j = 0;
//         while (i < height.size())
//         {
//             if (height[i] >= comp)
//             {
//                 ans += (comp * (i - j - 1) - count);
//                 comp = height[i];
//                 j = i;
//                 count = 0;
//             }
//             else
//             {
//                 count += height[i];
//             }
//             i++;
//         }
//         comp = height[height.size() - 1];
//         j = height.size() - 1;
//         i = j - 1;
//         count = 0;
//         while (i >= 0)
//         {
//             if (height[i] > comp)
//             {
//                 ans += (comp * (j - i - 1) - count);
//                 comp = height[i];
//                 count = 0;
//                 j = i;
//             }
//             else
//             {
//                 count += height[i];
//             }
//             i--;
//         }
//         return ans;
//     }
// };

class Solution
{
    public:
        int trap(vector<int>&height)
        {
            int size = height.size();
            vector<int> maxleft(size, 0);
            vector<int> maxright(size, 0);

            int i = 0;
            int left = height[0];
            int right = height[size - 1];
            while (i < size)
            {
                if (height[i] > left)
                    left = height[i];
                if (height[size-i-1] > right)
                    right = height[size-i-1];
                maxleft[i] = left;
                maxright[size-i-1] = right;
                i++;
            }
            int ans = 0;
            for (int i = 0; i < size; i++)
            {
                ans += abs(min(maxleft[i], maxright[i]) - height[i]);
            }
            return (ans);
        }
};

int main(void)
{
    vector<int> vect = {4, 2, 0, 3, 2, 5};
    Solution s;

    cout << s.trap(vect) << endl;
    return (0);
}