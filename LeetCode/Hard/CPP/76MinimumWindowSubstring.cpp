#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    bool checkisequal(map<int,int> mp1, map<int,int> mp2)
    {
        for (auto u:mp2)
        {
            if (mp2[u.first] != mp1[u.first])
                return (false);
        }
        return (true);
    }
    string minWindow(string s, string t)
    {
        map<int, int> mp;
        map<int, int> mp2;
        if (s.size() < t.size())
            return (string(""));
        for (int i = 0; i < t.size(); i++)
            mp2[t[i]]++;
        int i = 0, j = 0;
        vector<string> ans;
        while (i < s.size())
        {
            while (j < s.size() && !checkisequal(mp,mp2))
            {
                mp[s[j]]++;
                j++;
            }
            mp[s[j--]]--;
            mp[s[i]]--;
            // while (i < s.size() && !checkisequal(mp,mp2))
                // mp[s[i++]]--;
            if (checkisequal(mp,mp2))
                ans.push_back(s.substr(i, j - i + 1));
            i++;
        }
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << endl;
        return (string("AAA"));
        // return (s.substr(ans[0],ans[1] - ans[0] + 1));
    }
};


int main(void)
{
    Solution s;
    string test = s.minWindow("ADOBECODEBANC", "ABC");
    // cout << test << endl;
    return (0);
}