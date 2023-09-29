#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        int size = grid.size();
        int count = 0;
        map<vector<int>, int> mp;

        for (int i = 0; i < size; i++)
        {
            mp[grid[i]]++;
        }
        for (int i = 0; i < size; i++)
        {
            vector<int> v;

            for (int j = 0; j < size; j++)
                v.push_back(grid[j][i]);
            if (mp[v] != 0)
                count += mp[v];
        }
        return count;
    }
};

int main(void)
{
    Solution s;
    vector<vector<int>> grid;

    grid.push_back({3, 2, 1});
    grid.push_back({1, 7, 6});
    grid.push_back({2, 7, 7});
    cout << s.equalPairs(grid);
    return (0);
}