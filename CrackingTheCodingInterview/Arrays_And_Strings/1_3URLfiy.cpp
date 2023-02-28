#include<iostream>

using namespace std;

// My Solution
void    solution(string &input, int n)
{
    int end = n - 1;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == ' ')
        {
            for (int j = end; j > i; j--)
            {
                input[j + 2] = input[j];
            }
            end += 2;
            input[i] = '%';
            input[i+1] = '2';
            input[i+2] = '0';
        }
    }
}


int main(void)
{
    string input;

    input = "Mr John Smith    ";
    solution(input, 13);
    cout << "|" << input << "|" << endl;
}