#include<iostream>
#include<set>
#include<vector>

using namespace std;

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        vector<int> vec(2001, 0);
        int count = 0;
        set<int> st;

        for (auto u : arr)
            vec[u + 1000]++;
        for (auto u : vec)
        {
            if (u != 0)
            {
                st.insert(u);
                count++;
            }
        }
        return (st.size() == count);
    }
};

int main(void)
{
    vector<int> test = {1, 2, 2,1,1,3};

    Solution s;

    if (s.uniqueOccurrences(test)){
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}