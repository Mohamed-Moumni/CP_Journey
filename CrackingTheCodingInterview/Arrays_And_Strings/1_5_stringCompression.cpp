#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

string  solution(string input)
{
    vector <pair<char, int> >   vect;
    int                         count = 0;
    int                         val;
    char                        a = input[0];
    int                         i = 0;

    while (i < input.size())
    {
        count = 0;
        while (input[i] && a == input[i])
        {
            count++;
            i++;
        }
        vect.push_back(make_pair(a,count));
        a = input[i];
    }
    count = 0;
    for (int i = 0; i < vect.size(); i++)
    {
        val = vect[i].second;
        count++;
        while (val > 0)
        {
            count++;
            val /= 10;
        }
    }
    if (count >= input.size())
        return (input);
    string result = "";
    for (int i = 0; i < vect.size(); i++)
    {
        result += vect[i].first;
        result += to_string(vect[i].second);
    }
    return (result);
}

int main(void)
{
    cout << solution("aabcccccaaa") << endl;
}