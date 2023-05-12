#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s2.size() - s1.size();
        if (n <= 0)
        {
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            return (s1.compare(s2) == 0 ? true : false);
        }
        vector<int> ans(26,0);
        vector<int> chars(26, 0);
        for (int i = 0; i < s1.size(); i++)
        {
            chars[s1[i] - 'a']++;
            ans[s2[i] - 'a']++;
        }
        int i = 0,j = s1.size() - 1;
        while (i <= n)
        {
            int k = 0;
            while (k < 26)
            {
                if (ans[k] != chars[k])
                    break ;
                k++;
            }
            if (k == 26)
                return true;
            ans[s2[i] - 'a']--;
            i++;
            j++;
            if (j < s2.size())
                ans[s2[j] - 'a']++;
        }
        return (false);
    }
};
int main(void)
{
    Solution s;

    if (s.checkInclusion("ab", "eidbaooo"))
        cout << "True\n";
    else
        cout << "False\n";
    return (0);
}