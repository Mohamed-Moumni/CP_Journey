#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    vector<int> primes;

    primes.push_back(2);
    int count = 1;
    int i = 3;
    while (true)
    {
        int j = 0;
        while (j < primes.size())
        {
            if (i % primes[j] == 0)
                break;
            j++;
        }
        if (j == primes.size())
        {
            primes.push_back(i);
            count++;
        }
        if (count == 10001)
            break ;
        i++;
    }
    cout << primes[primes.size() - 1] << endl;
    return (0);
}