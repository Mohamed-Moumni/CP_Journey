#include<iostream>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0, j = 0, haystackSize = haystack.size(), needleSize = needle.size();
        while (j < haystackSize)
        {
            if (j - i + 1 < needleSize)
                j++;
            else
            {
                if (haystack.substr(i, needleSize) == needle)
                    return i;
                i++;j++;
            }
        }
        return -1;
    }
};

int main(void)
{
    Solution s;
    
    cout << s.strStr("leetcode", "leeto") << endl;
}
