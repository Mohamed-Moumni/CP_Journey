#include<iostream>
#include<vector>
#include<deque>
#include<stack>

using namespace std;

class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        stack<int> st;
        int size = asteroids.size();
        vector<int> ans;

        for (int i = 0; i < size; i++)
        {
            if (asteroids[i] > 0)
                st.push(asteroids[i]);
            else
            {
                if (st.size() == 0 || st.top() < 0)
                    st.push(asteroids[i]);
                else if (st.top() > 0)
                {
                    while (st.size()> 0 && st.top() > 0 && abs(st.top()) < abs(asteroids[i]))
                        st.pop();
                    if (st.size() == 0)
                        st.push(asteroids[i]);
                    else if (st.top() < 0)
                        st.push(asteroids[i]);
                    else if (st.top() + asteroids[i] == 0)
                        st.pop();
                }
            }
        }
        ans = vector<int>(st.size());
        while (st.size() > 0)
        {
            int value = st.top();
            ans[st.size() - 1] = value;
            st.pop();
        }
        return ans;
    }
};

int main(void)
{
    Solution s;
    vector<int> vect = {1, -2, -2, -2};

    vector<int> ans = s.asteroidCollision(vect);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return (0);
}