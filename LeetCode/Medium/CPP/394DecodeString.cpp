#include<iostream>
#include<vector>
#include<stack>

using namespace std;

class Solution
{
public:
    stack<int> k_stack;

    string solve(const string & s, int & i, int size){
        string res = "";
        int k = 0;

        while (i < size)
        {
            if (isdigit(s[i]))
            {
                k = k * 10 + (s[i] - '0');
            }
            else if (s[i] == '[')
            {
                k > 0 ? k_stack.push(k) : k_stack.push(1);
                k = 0;
                res += solve(s, ++i, size);
                continue;
            }
            else if (s[i] == ']')
            {
                int count = k_stack.top() - 1;
                string concat = res;
                while (count > 0) 
                {
                    res += concat;
                    count--;
                }
                k_stack.pop();
                i++;
                return res;
            }
            else
            {
                res.push_back(s[i]);
            }
            i++;
        }
        return res;
    }

    string decodeString(string s)
    {
        int i = 0;
        int size = s.size();
        string res = "";
        while (i < size)
        {
            res += solve(s, i, size);
        }
        return res;
    }
};

int main(void)
{
    Solution s;

    string res = s.decodeString("2[abc]3[cd]ef");
    cout << res << endl;
    return (0);
}