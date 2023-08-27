#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int maxprof = 0;

        int i = 0, j = 1;
        int size = prices.size();
        while (j < size)
        {
            if (prices[i] < prices[j])
            {
                maxprof = max(maxprof,prices[j] - prices[i]);
            }
            else
                i = j;
            j++;
        }
        return (maxprof);
    }
};

int main(void)
{
    Solution s;

    vector<int> prices = {2, 4, 1};
    cout << s.maxProfit(prices) << endl;
    return (0);
}
