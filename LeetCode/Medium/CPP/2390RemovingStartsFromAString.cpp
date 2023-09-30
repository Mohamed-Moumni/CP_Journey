#include<iostream>
#include<vector>
#include<stack>

using namespace std;

class Solution
{
public:
    string removeStars(string s)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        string ans;
        int size = s.size();

        for (int i = 0; i < size; i++)
        {
            if (s[i] == '*')
                ans.pop_back();
            else
                ans.push_back(s[i]);
        }
        return ans;
    }
};
int main(void)
{
    Solution s;

    cout << s.removeStars("leet**cod*e");
    return (0);
}