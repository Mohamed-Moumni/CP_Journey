#include<iostream>
#include<vector>
#include<math>

using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        return int(-0.5 + sqrt(0.25 + 2 * double(n)));
    }
};

int main(void)
{
    Solution s;

    cout << s.arrangeCoins(8) << endl;
    return (0);
}