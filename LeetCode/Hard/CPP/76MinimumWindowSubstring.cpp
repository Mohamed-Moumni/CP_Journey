#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    bool checkEquality(map<char,int> mp, map<char, int> mp2)
    {
        for (auto u:mp2)
        {
            if (mp2[u.first] != mp[u.first])
                return (false);
            cout << u.first << "   " << u.second << "--------" << endl;
        }
        return (true);
    }

    string minWindow(string s, string t)
    {
        map<char, int> mp;
        map<char, int> mp2;

        if (s.size() < t.size())
            return (string(""));
        for (int i = 0; i < t.size(); i++)
            mp2[t[i]]++;
        int i = 0, j = 0;
        vector<int> vec(2);
        vec[0] = 0;vec[1] = s.size();
        bool check;
        while (i < s.size())
        {
            check = false;
            while (j < s.size())
            {
                mp[s[j]]++;
                cout << s.substr(i, j - i + 1) << endl;
                if (checkEquality(mp, mp2))
                {
                    check = true;
                    break ;
                }
                j++;
            }
            mp[s[i]]--;
            // if ((vec[1] - vec[0] + 1) > (j - i + 1) && check)
            // {
            //     vec[0] = i;
            //     vec[1] = j;
            // }
            // cout << s.substr(vec[0], vec[1] - vec[0] + 1) << endl;
            i++;
        }        
        return (string(""));
    }
};

int main(void)
{
    Solution s;
    string test = s.minWindow("ADOBECODEBANC", "ABC");
    // cout << test << endl;
    return (0);
}