#include<iostream>
#include<vector>

using namespace std;

// this solution is valid but found that it's not all the cases it's work

// int main(void)
// {
//     vector<int> primes;

//     primes.push_back(2);
//     int count = 1;
//     int i = 3;
//     while (true)
//     {
//         int j = 0;
//         while (j < primes.size())
//         {
//             if (i % primes[j] == 0)
//                 break;
//             j++;
//         }
//         if (j == primes.size())
//         {
//             primes.push_back(i);
//             count++;
//         }
//         if (count == 10001)
//             break ;
//         i++;
//     }
//     cout << primes[primes.size() - 1] << endl;
//     return (0);
// }

bool    isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return (true);
}

int main(void)
{
    int count = 1;
    int i = 3;
    while (true)
    {
        if (isPrime(i))
            count++;
        if (count == 10001)
            break ;
        i++;
    }
    cout << i << endl;
    return (0);
}