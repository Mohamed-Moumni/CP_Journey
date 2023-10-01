#include<iostream>
#include<vector>
#include<stack>

using namespace std;

class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        stack<int> st;
        int size = asteroids.size();
        int stillPush;

        st.push(asteroids[0]);
        for (int i = 1; i < size; i++)
        {
            int value = asteroids[i];
            if (st.empty())
                st.push(value);
            else if (st.top() < 0)
                st.push(value);
            else if (st.top() > 0 && value > 0)
                st.push(value);
            else
            {
                stillPush = 1;
                while (!st.empty() > 0 && st.top() > 0)
                {
                    if (st.top() + value > 0)
                    {
                        stillPush = 0;
                        break;
                    }
                    else if (st.top() + value < 0)
                    {
                        st.pop();
                    }
                    else
                    {
                        st.pop();
                        stillPush = 0;
                        break;
                    }
                }
                if (stillPush)
                    st.push(value);
            }
        }
        int stackSize = st.size();
        vector<int> ans = vector<int>(stackSize);
        for (int i = stackSize - 1; i >= 0; i--)
        {
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
};

int main(void)
{
    Solution s;
    vector<int> vect = {-2, -2, 1, -2};

    vector<int> ans = s.asteroidCollision(vect);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return (0);
}