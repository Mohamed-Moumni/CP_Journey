#include<iostream>
#include<vector>

using namespace std;

void    merge(vector<int>& nums, int left, int mid, int right)
{
    int L, R, i, j, k;

    L = mid - left + 1;
    R = right - mid;
    std::vector<int> a(nums.begin() + left, nums.begin() + mid + 1);
    std::vector<int> b(nums.begin() + mid + 1, nums.begin() + right + 1);
    i = 0;j = 0;k = left;
    while (i < L && j < R)
    {
        if (a[i] <= b[j])
            nums[k] = a[i++];
        else
            nums[k] = b[j++];
        k++;
    }
    while (i < L)
    {
        nums[k] = a[i++];
        k++;
    }
    while (j < R)
    {
        nums[k] = b[j++];
        k++;
    }
}

void    mergeSort(vector<int>& nums, int left, int right)
{
    int mid;

    if (left >= right)
        return ;
    mid = (right + left) / 2;
    mergeSort(nums, left, mid);
    mergeSort(nums, mid + 1, right);
    merge(nums, left, mid, right);
}

vector<int> sortArray(vector<int>& nums)
{
    mergeSort(nums,0,nums.size() - 1);
    return nums;
}

int main(void)
{
    //[5,2,3,1]
    vector<int> vect;

    vect.push_back(5);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(1);
    sortArray(vect);
    for (int i= 0; i < vect.size(); i++)
    {
        cout << vect[i] << endl;
    }
    return (0);
}