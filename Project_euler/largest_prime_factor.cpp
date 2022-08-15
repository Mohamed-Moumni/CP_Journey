#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int is_prime(long n)
{
    long sqr;

    sqr = sqrt(n);
    for (int i = 2; i < sqr ; i++)
    {
        if (n % i == 0)
        {
            return (1);
        }
    }
    return (0);
}
int main(void)
{
    long n;

    n = 600851475143;
    long sqr;

    sqr = sqrt(n);
    long max = 0;
    for (long i = 2; i < sqr; i++)
    {
        if (!is_prime(i))
        {
            max = i;
        }
    }
    cout << max << "\n";
}