#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k)
    {
        vector<int> alpha(26, 0);

        int i = 0, j = 0;
        int maxcount = 0;
        int ans = 0;

        while (j < s.size())
        {
            alpha[s[j] - 'A']++;
            for (int h = 0; h < 26; h++)
                maxcount = max(maxcount, alpha[h]);
            while (j - i + 1 - maxcount > k)
            {
                alpha[s[i] - 'A']--;
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return (ans);
    }
};

int main(void)
{
    Solution s;

    cout << s.characterReplacement("AABABBA", 1) << endl;
    return (0);
}