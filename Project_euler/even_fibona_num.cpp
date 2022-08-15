#include<iostream>
#include<algorithm>

using namespace std;

#define MAXN 4000000
#define UNKNOWN -1

long f[MAXN+1];

long fib_c(int n)
{
    if (f[n] == UNKNOWN)
    {
        f[n] = fib_c(n - 1) + fib_c(n - 2);
    }
    return (f[n]);
}

long    fib_c_driver(int n)
{
    int i;

    f[0] = 0;
    f[1] = 1;
    for (i = 2; i <= n; i++)
    {
        f[i] = UNKNOWN;
    }
    return (fib_c(n));
}

int main(void)
{
    int sum = 0;
    for (int i = 2; i < MAXN; i++)
    {
        if (fib_c_driver(i) %
    }
    cout << sum << "\n";
}