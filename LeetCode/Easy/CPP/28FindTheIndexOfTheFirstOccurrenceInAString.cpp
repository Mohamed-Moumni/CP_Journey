#include<iostream>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0;
        int j;
        int needleSize = needle.size();
        int haystackSize = haystack.size();
        while (i < haystackSize)
        {
            while (haystack[i] != needle[0])
                i++;
            j = 0;
            for (int k = i; k < haystackSize && j < needleSize; k++)
            {
                if (haystack[k] != needle[j])
                    break;
                j++;
            }
            if (j == needleSize)
                return i;
            i++;
        }
        return (-1);
    }
};

int main(void)
{
    Solution s;
    
    cout << s.strStr("buts=d", "sad") << endl;
}
