#include <bits/stdc++.h>

using namespace std;

int search(vector<int>& nums, int target)
{
    int left = 0, right = nums.size() - 1, mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (nums[mid] < target)
            left = mid + 1;
        else if (nums[mid] > target)
            right = mid - 1;
        else
            return (mid);
    }
    return (-1);
}

int main(void)
{
    vector<int> vect;
    vect.push_back(-1);
    vect.push_back(0);
    vect.push_back(3);
    vect.push_back(5);
    vect.push_back(9);
    vect.push_back(12);
    cout << search(vect, -1) << endl;
    return (0);
}