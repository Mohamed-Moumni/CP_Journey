#include<iostream>
#include<vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums)
    {
        int size = nums.size();
        vector<int> pref(size, 1);
        vector<int> postf(size, 1);

        pref[0] = nums[0];
        postf[size-1] = nums[size-1];
        for (int i = 0; i < size - 1; i++)
        {
            pref[i + 1] = pref[i] * nums[i+1];
            postf[size - i - 2] = postf[size - i - 1] * nums[size - i - 2];
        }
        vector<int> result(size);
        for(int i = 0; i < size ; i++)
        {
            if (i == 0)
                result[i] = postf[i + 1];
            else if (i == size - 1)
                result[i] = pref[i - 1];
            else
                result[i] = pref[i - 1] * postf[i + 1];
        }
        return (result);
    }

int main(void)
{
    vector<int> test;
    test.push_back(1);
    test.push_back(2);
    test.push_back(3);
    test.push_back(4);
    vector<int> result = productExceptSelf(test);
    for (int i = 0; i < 4; i++)
    {
        cout << result[i] << endl;
    }
}