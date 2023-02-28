// remove comment to test the solution
#include<iostream>
#include<map>

using namespace std;

// My Solution

bool    solution(string input)
{
    map<char, int> mp;
    int size;

    size = input.size();
    for (int i = 0; i < size; i++)
    {
        if (input[i] != ' ')
            mp[input[i]]++;
    }
    int odd = 0;
    for(auto u: mp)
    {
        if (u.second % 2)
            odd++;
    }
    if (odd > 1)
        return (false);
    return (true);
}

// Adjusted Solution after viewing other solutions

int main(void)
{
    string input = "tactcoapapa";
    if (solution(input))
        cout << "True" << endl;
    else
        cout << "False" << endl;
}