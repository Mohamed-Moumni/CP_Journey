#include<iostream>

using namespace std;

class Solution
{
    public:
        int minPartitions(string n)
        {
            cin.tie(NULL);
            ios_base::sync_with_stdio(false);
            int maximum = 0;
            int size = n.size();
            for (int i = 0; i < size; i++)
            {
                if (n[i] - '0' >= maximum)
                {
                    maximum = n[i] - '0';
                }
            }
            return maximum;
        }
};

int main(void)
{
    Solution s;

    cout << s.minPartitions("27346209830709182346") << endl;
    return 0;
}