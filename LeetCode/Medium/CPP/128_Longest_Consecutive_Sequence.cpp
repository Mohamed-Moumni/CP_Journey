#include<iostream>
#include<set>
#include<vector>
#include<unordered_set>

using namespace std;

// My First Solution
//  int longestConsecutive(vector<int>& nums)
// {
//     int count = 0;
//     int max = -1e9;
//     set <int> s;
//     int size = nums.size();
//     for (int i = 0; i < size; i++)
//     {s.insert(nums[i]);}
//     auto first = s.begin();
//     auto last = s.empty() ? s.end() : std::prev(s.end());
//     for (auto it = first; it != last ; it++)
//     {
//         auto next_it = next(it);
//         if ( ( *next_it - *it ) == 1)
//         {
//             count++;
//             if (max < count)
//                 max = count;
//         }
//         else
//         {
//             count = 0;
//         }
//     }
//     if (max < 0)
//         return (1);
//     return (max + 1);
// }

//optimized one
int longestConsecutive(vector<int>& nums)
{
    unordered_set<int> s(nums.begin(), nums.end());
    int size = nums.size();
    if (size == 0)
        return 0;
    int max_el = 0;
    for (auto &n:s)
    {
        if (!s.count(n - 1))
        {
            int length = 1;
            while (s.count(n + length))
                length++;
            max_el = max(length, max_el);
        }
    }
    return (max_el);
}

int main(void)
{
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(0);
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(3);
    vec.push_back(2);

    cout << longestConsecutive(vec);
    return (0);
}