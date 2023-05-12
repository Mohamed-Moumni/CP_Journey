#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> vec(s.size(), 1);
        int i = 0, j = 1;
        int maxi = 0;
        while (i < s.size())
        {
            if (s[i] == s[j])
                i++;
            else
            {
                vec[j] = j - i + 1;
                maxi = max(maxi, vec[j]);
                if (j == s.size())
                    i++;
            }
            if (j < s.size())
                j++;
        }
        return (maxi);
    }
};

int main(void)
{
    Solution s;

    cout << s.lengthOfLongestSubstring("abcabcbb") << endl;
    return (0);
}