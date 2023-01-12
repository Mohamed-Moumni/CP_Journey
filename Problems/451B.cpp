#include<vector>
#include <utility> 
#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
    long long n;cin>>n;
    vector<long long> vec(n);
    for (int i=0;i<n;i++)
    {
        cin >> vec[i];
    }
    int start = 0;
    int end = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (vec[i] > vec[i + 1])
        {
            start = i;
            while ( i < n - 1 && vec[i + 1] < vec[i] )
                i++;
            end = i;
            reverse(vec.begin() + start, vec.begin() + i + 1);
            break;
        }
    }
    if (is_sorted(vec.begin(), vec.end()))
    {
        cout << "yes" << endl;
        cout << start+1 << " " << end+1 << endl;
    }
    else
        cout << "no" << endl;
    return (0);
}