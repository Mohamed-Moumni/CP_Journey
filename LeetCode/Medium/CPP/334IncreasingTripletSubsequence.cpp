#include <climits>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums)
    {
        int a = INT_MAX;
        int b = INT_MAX;
        for (int u: nums)
        {
            if (u <= a)
                a = u;
            else if (u <= b)
                b = u;
            else
                return true;
        }
        return false;
    }
};

int main(void)
{
    vector<int> a;
    Solution s;
    a.push_back(20);
    a.push_back(100);
    a.push_back(10);
    a.push_back(12);
    a.push_back(5);
    a.push_back(13);
    if (s.increasingTriplet(a))
        cout << "True\n";
    else
        cout << "False\n";
    return (0);
}
