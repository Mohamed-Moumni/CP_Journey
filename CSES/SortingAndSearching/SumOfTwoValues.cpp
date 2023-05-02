#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

// int main(void)
// {
//     int n,x;
//     cin >> n >> x;
//     map<int,int> mp;

//     for (int i = 0; i < n; i++)
//     {
//         int a;cin>>a;
//         if (mp.count(x - a))
//         {
//             cout << mp[x-a] + 1 << " " << i + 1 << endl;
//             return (0);
//         }
//         else
//         {
//             mp[a] = i;
//         }
//     }
//     cout << "IMPOSSIBLE" << endl;
//     return (0);
// }

// two pointer solution
int main(void)
{
    int n,x;
    cin >> n >> x;
    vector<pair<int,int> > vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i].first;
        vec[i].second = i;
    }
    sort(vec.begin(), vec.end());
    int left = 0, right = n - 1;
    while (left < right)
    {
        if (vec[left].first + vec[right].first == x)
        {
            cout << vec[left].second + 1 << " " << vec[right].second + 1 << endl;
            return (0);
        }
        if (vec[left].first + vec[right].first > x)
            right--;
        else
            left++;
    }
    cout << "IMPOSSIBLE\n";
}