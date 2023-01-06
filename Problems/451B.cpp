#include<vector>
#include <utility> 
#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
    long long n;cin>>n;
    vector<pair<long long, long long> > arr;
    long long k;
    for (int i=0;i<n;i++)
    {
        cin >> k;
        arr.push_back(make_pair(k,i+1));
    }
    sort(arr.begin(), arr.end());
    long long end = 0, start = 0, count = 0;
    for (int i = 0; i<n;i++)
    {
        if ((i + 1) != arr[i].second && count == 0)
        {
            end = arr[i].second;
            count++;
        } 
        else if ((i + 1) != arr[i].second && count == 1)
        {
            start = arr[i].second;
        }
    }
    if (count <= 1)
    {
        if (count == 0)
        {
            cout << "yes" << endl;
            cout << "1 1" << endl;
        }
        else
        {
            bool ans = false;
            int i = 0;
            while (i < n - 1 && arr[i].second > arr[i + 1].second)
                i++;
            while (i < n - 1)
            {
                if (arr[i].second > arr[i + 1].second)
                {
                    ans = true;
                    break;
                }
                i++;
            }
            if (!ans)
            {
                cout << "yes" << endl;
                cout << start << " " << end << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
    }
    else
        cout << "no" << endl;
}