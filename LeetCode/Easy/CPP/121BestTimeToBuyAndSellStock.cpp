#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int min, max;

        min = prices[0];
        int index;
        for (int i = 0; i < prices.size(); i++)
        {
            if (min >= prices[i])
            {
                min = prices[i];
                index = i;
            }
        }
        max = prices[prices.size() - 1];
        for (int j = prices.size() - 1; j > index; j--)
        {
            if (max < prices[j])
                max = prices[j];
        }
        return (max - min);
    }
};

int main(void)
{
    Solution s;

    vector<int> prices = {7, 6, 4, 3, 1};
    cout << s.maxProfit(prices) << endl;
    return (0);
}