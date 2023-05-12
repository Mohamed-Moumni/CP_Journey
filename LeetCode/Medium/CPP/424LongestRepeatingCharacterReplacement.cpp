#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k)
    {
        int ans = 0;
        for (int i = 0; i < s.size();i++)
        {
            int counter = 1; int count = k;
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[i] == s[j])
                    counter++;
                else
                {
                    if (count)
                    {
                        count--;
                        counter++;
                    }
                    else
                        break ;
                }
            }
            ans = max(ans, counter);
        }
        return ans;
    }
};

int main(void)
{
    Solution s;

    cout << s.characterReplacement("ABAB", 2) << endl;
    return (0);
}