#include <iostream>
#include <complex>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

int main(void)
{
    int arr_size;

    cin >> arr_size;
    vector<int> arr(arr_size + 1);
    for (int i=1;i <= arr_size;i++)
    {
        cin >> arr[i];
    }
    vector<int> dp(arr_size+1,0);
    for (int i=0; i < arr_size; i++)
    {
        dp[i+1] = max(dp[i]+arr[i+1], arr[i+1]);
    }
    int max_sub_array=-1e9;
    for (int u:dp)
    {
        if(max_sub_array < u)
            max_sub_array = u;
    }
    cout << max_sub_array << "\n";
}