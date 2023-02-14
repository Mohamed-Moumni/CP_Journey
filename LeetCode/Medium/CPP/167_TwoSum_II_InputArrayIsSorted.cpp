#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        int i,j;
        vector<int> res;
        int sum;

        i = 0;j = numbers.size() - 1;
        while (i < j)
        {
            sum = numbers[i] + numbers[j];
            if ( sum == target)
            {
                res.push_back(i+1);
                res.push_back(j+1);
                return (res);
            }
            if (sum < target)
                i++;
            if (sum > target)
                j--;
        }
        return (res);
    }
};

int main(void)
{
    Solution a;
    vector<int> vect, res;

    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(7);
    vect.push_back(9);
    res = a.twoSum(vect, 9);
    for (int i = 0; i < 2;i++)
    {
        cout << res[i] << endl;
    }
    return (0);
}