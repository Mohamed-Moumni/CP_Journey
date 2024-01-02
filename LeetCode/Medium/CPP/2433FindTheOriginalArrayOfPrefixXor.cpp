#include<iostream>
#include<vector>

using namespace std;

class Solution
{
public:
    vector<int> findArray(vector<int> &pref)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int len = pref.size();
        int curr_XOR = pref[0];
        for (int i = 1; i < len; ++i)
        {
            pref[i] = curr_XOR ^ pref[i];
            curr_XOR ^= pref[i];
        }
        return move(pref);
    }
};

int main(void)
{
    Solution s;
    vector<int> input = {5, 2, 0, 3, 1};
    vector<int> ans = s.findArray(input);
    for (auto a:ans){
        cout << a << endl;
    }
    return (0);
}