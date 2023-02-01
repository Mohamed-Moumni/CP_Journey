#include<stack>
#include<string>
#include<iostream>
#include<vector>

using namespace std;

int evalRPN(vector<string>& tokens) {
        stack<int> res;
        int size = tokens.size();
        int val1,val2;
        for (int i = 0; i < size; i++)
        {
            if (!tokens[i].compare("+"))
            {
                val1 = res.top();
                res.pop();
                val2 = res.top();
                res.pop();
                res.push(val2 + val1);
            }
            else if (!tokens[i].compare("-"))
            {
                val1 = res.top();
                res.pop();
                val2 = res.top();
                res.pop();
                res.push(val2 - val1);
            }
            else if (!tokens[i].compare("*"))
            {
                val1 = res.top();
                res.pop();
                val2 = res.top();
                res.pop();
                res.push(val2 * val1);
            }
            else if (!tokens[i].compare("/"))
            {
                val1 = res.top();
                res.pop();
                val2 = res.top();
                res.pop();
                res.push(val2 / val1);
            }
            else
            {
                res.push(stoi(tokens[i]));
            }
        }
        return (res.top());
    }

int main(void)
{
    vector<string> tokens = {"2", "1", "+", "3", "*"};
    cout << evalRPN(tokens);
    return (0);
}