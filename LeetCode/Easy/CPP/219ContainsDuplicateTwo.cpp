#include<iostream>
#include<vector>
#include<set>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        set<int> st;
        int j = 0;
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            if ((i - j) > k)
            {
                st.erase(nums[j]);
                j++;
            }
            if (st.find(nums[i]) != st.end())
                return (true);
            st.insert(nums[i]);
        }
        return (false);
    }
};

int main(void)
{
    Solution s;
    vector<int> vect;

    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(1);
    if (s.containsNearbyDuplicate(vect, 3))
        cout << "True\n";
    else
        cout << "False\n";
    return (0);
}