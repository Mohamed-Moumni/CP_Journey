#include<iostream>

using namespace std;

// My Solution

// void    solution(string &input, int n)
// {
//     int end = n - 1;
//     for (int i = 0; i < input.size(); i++)
//     {
//         if (input[i] == ' ')
//         {
//             for (int j = end; j > i; j--)
//             {
//                 input[j + 2] = input[j];
//             }
//             end += 2;
//             input[i] = '%';
//             input[i+1] = '2';
//             input[i+2] = '0';
//         }
//     }
// }

// Adjusted Solution after viewing other solutions

// void    solution(string &input, int n)
// {
//     int SpecCount;

//     SpecCount = 0;
//     for (int i = 0;i <n; i++)
//     {
//         if (input[i] == ' ')
//             SpecCount++;
//     }
//     int completLength;

//     completLength = n + 2 * SpecCount;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (input[i] == ' ')
//         {
//             input[completLength - 1] = '0'; 
//             input[completLength - 2] = '2';
//             input[completLength - 3] = '%';
//             completLength -= 3;
//         }
//         else
//         {
//             input[completLength - 1] = input[i];
//             completLength--;
//         }
//     }
// }

int main(void)
{
    string input;

    input = "Mr John Smith    ";
    solution(input, 13);
    cout << "|" << input << "|" << endl;
}