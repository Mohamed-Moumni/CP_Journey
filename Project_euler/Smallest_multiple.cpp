#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
    long long n;
    int     i;

    n = 1;
    i = 1;
    while (1)
    {
        if (i == 10)
        {
            cout << n;
            break ;
        }
        if (n % i == 0)
            i++;
    }
}