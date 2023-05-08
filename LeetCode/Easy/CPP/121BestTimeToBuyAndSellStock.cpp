#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int maxprof = 0, minimum, maximum;

        minimum = prices[0], maximum = prices[1];
        int i = 0, j = 1;
        int size = prices.size();
        while (i < size && j < size)
        {
            minimum = min(minimum, prices[i]);
            maximum = prices[j];
            maxprof = max(maxprof, maximum - minimum);
            i++;
            j++;
        }
        return (maxprof);
    }
};

int main(void)
{
    Solution s;

    vector<int> prices = {7, 6, 4, 3, 1};
    cout << s.maxProfit(prices) << endl;
    return (0);
}