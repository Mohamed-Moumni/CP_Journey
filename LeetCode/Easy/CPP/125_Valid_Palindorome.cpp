#include<iostream>
#include<string>

using namespace std;

class Solution
{
    public:
        bool    isPalindorome(string s)
        {
            string proc;
            int i,j;

            for (int i = 0; s[i]; i++)
            {
                if (isalnum(s[i]))
                {
                    proc.push_back(tolower(s[i]));
                }
            }
            i = 0;j = proc.size() - 1;
            cout << proc << endl;
            while (i < j)
            {
                if (proc[i] != proc[j])
                    return (false);
                i++;
                j--;
            }
            return (true);
        }
};



int main(void)
{
    Solution a;

    if (a.isPalindorome("Marge, let's \"[went].\" I await {news} telegram."))
        cout << "palindrome" << endl;
    else
        cout << "non-palindorme" << endl;
    return (0);
}