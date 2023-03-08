#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isValid(string s) {
        stack<char> mystack;
        int size = s.size();
        for (int i = 0;i < size; i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                mystack.push(s[i]);
            else
            {
                if (mystack.size())
                {
                    if (mystack.top() == '(' && s[i] == ')')
                        mystack.pop();
                    else if (mystack.top() == '[' && s[i] == ']')
                        mystack.pop();
                    else if (mystack.top() == '{' && s[i] == '}')
                        mystack.pop();
                    else
                        return false;
                }
                else
                    return false;
            }
        }
        if (mystack.size() != 0)
            return false;
        return true;
    }

int main(void)
{
    string s = "[[[(({}))]]]";
    if (isValid(s))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return (0);
}