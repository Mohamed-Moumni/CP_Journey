#include<iostream>
#include<algorithm>
#include <vector>

#define mod 1000000007
using namespace std;


long long pow_a_b(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a 
    }
}

int main(void)
{
    long long n,a,b;

    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        cout << pow_a_b(a,b) << "\n";
    }
    return (0);
}