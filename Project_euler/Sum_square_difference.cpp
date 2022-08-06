#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    long long   n;

    n = 100;

    // formula to calculate the sum of numbers sum = n(n+1) /2
    // formula to claculate the sum of square numbers sum = n(n+1)(2n + 1)/6

    long long   sum1;
    long long   sum2;
    long long   res;

    sum1 = (n * (n + 1)) / 2;
    sum2 = (n * (n + 1) * (2*n + 1))/ 6;
    res = sum1 * sum1;
    cout << res - sum2;
}