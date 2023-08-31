#include <iostream>
#include <vector>

using namespace std;

bool increasingTriplet(vector<int>& nums)
{
    int size = nums.size();
    int a = INT32_MAX;
    int b = INT32_MAX;

    for (int i = 0; i < size; i++)
    {
        if (b < nums[i])
            return true;
        if (a > nums[i]) a = nums[i];

        if (a < nums[i] && nums[i] < b)
            b = nums[i];
    }
    return false;
}


int main(void)
{
    vector<int> a;
    a.push_back(20);
    a.push_back(100);
    a.push_back(10);
    a.push_back(12);
    a.push_back(5);
    a.push_back(13);
    if (increasingTriplet(a))
        cout << "True\n";
    else
        cout << "False\n";
    return (0);
}