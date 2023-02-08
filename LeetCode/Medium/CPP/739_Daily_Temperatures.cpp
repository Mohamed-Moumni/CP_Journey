#include<vector>
#include<iostream>
#include<map>
#include<stack>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures)
    {
        int size = temperatures.size();
        vector<int> result(size);
        stack<pair<int, int> > monotonic_decr;

        for (int i = 0; i < size; i++)
        {
            int tempDay = i;
            int tempTempe = temperatures[i];
            while (!monotonic_decr.empty() && monotonic_decr.top().second < tempTempe)
            {
                result[monotonic_decr.top().first] = tempDay - monotonic_decr.top().first;
                monotonic_decr.pop();
            }
            monotonic_decr.push(make_pair(tempDay,temperatures[i]));
        }
        return (result);
    }
};

int main(void)
{
    Solution a;


    vector<int> temp;

    temp.push_back(73);
    temp.push_back(74);
    temp.push_back(75);
    temp.push_back(71);
    temp.push_back(69);
    temp.push_back(72);
    temp.push_back(76);
    temp.push_back(73);
    vector<int> res = a.dailyTemperatures(temp);
    for (auto u: res)
        cout << u << " ";
    return (0);
}