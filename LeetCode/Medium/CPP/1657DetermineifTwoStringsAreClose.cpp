#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        vector<int> vect1(26, 0);
        vector<int> vect2(26, 0);
        vector<int> vect3(26, 0);

        if (word1.size() != word2.size())
            return false;
        for (int i = 0; i < word1.size(); i++)
        {
            vect1[word1[i] - 'a']++;
            if (!vect3[word1[i] - 'a'])
                vect3[word1[i] - 'a'] = 1;
        }
        for (int i = 0; i < word2.size(); i++)
        {
            vect2[word2[i] - 'a']++;
            if (vect3[word2[i] - 'a'] == 1)
                vect3[word2[i] - 'a'] = 2;
        }
        for (int i = 0; i < 26; i++)
        {
            if (vect3[i] == 1)
                return false;
        }
        sort(vect1.begin(), vect1.end());
        sort(vect2.begin(), vect2.end());
        for (int i = 0; i < 26; i++)
        {
            if (vect1[i] != vect2[i])
                return false;
        }
        return true;
    }
};

int main(void)
{
    Solution s;

    if (s.closeStrings("cabbba", "abbccc"))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return (0);
}