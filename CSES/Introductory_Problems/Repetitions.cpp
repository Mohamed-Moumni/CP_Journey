#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void)
{
    string input;

    cin >> input;
    char c = input[0];
    int max = 1;
    int size = input.size();
    int count = 1;
    for (int i = 0; i < size - 1; i++)
    {
        if (c == input[i+1])
        {
            count++;
        }
        else
        {
            c = input[i+1];
            if (max < count)
                max = count;
            count = 1;
        }
    }
    if (count > max)
        max = count;
    cout << max << endl;
    return (0);
}