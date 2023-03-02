#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

// My first attempt

// string  solution(string input)
// {
//     vector <pair<char, int> >   vect;
//     int                         count = 0;
//     int                         val;
//     char                        a = input[0];
//     int                         i = 0;

//     while (i < input.size())
//     {
//         count = 0;
//         while (input[i] && a == input[i])
//         {
//             count++;
//             i++;
//         }
//         vect.push_back(make_pair(a,count));
//         a = input[i];
//     }
//     count = 0;
//     for (int i = 0; i < vect.size(); i++)
//     {
//         val = vect[i].second;
//         count++;
//         while (val > 0)
//         {
//             count++;
//             val /= 10;
//         }
//     }
//     if (count >= input.size())
//         return (input);
//     string result = "";
//     for (int i = 0; i < vect.size(); i++)
//     {
//         result += vect[i].first;
//         result += to_string(vect[i].second);
//     }
//     return (result);
// }

int count_compress(string input)
{
    int count;
    int consecutive = 0;

    count = 0;
    for (int i = 0; i < input.size(); i++)
    {
        if ((i + 1 >= input.size()) && (input[i] != input[i+1]))
        {
            count += to_string(consecutive).size() + 1;
            consecutive = 0;
        }
        consecutive++;
    }
    return (count);
}

string compress(string input)
{
    if (input.size() <= count_compress(input))
        return input;
    string  compressed = "";
    int     count;

    count = 1;
    for (int i = 0; i < input.size(); i++)
    {
        if (i + 1 >= input.size() || (input[i] != input[i+1]))
        {
            compressed += input[i];
            compressed.append(to_string(count));
            count = 0;
        }
        count++;
    }
    return compressed;
}

int main(void)
{
    cout << compress("aabcccccaaa") << endl;
}