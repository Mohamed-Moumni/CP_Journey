#include<iostream>
#include<algorithm>

using namespace std;

int power(int a, int b)
{
    if (b == 0)
        return (1);
    if (b % 2 == 0)
        return(power(a, b / 2) * power(a , b / 2));
    else
        return(power(a , b / 2) * power(a , b / 2) * a);
}

int fibo(int n)
{
    f
}

signed main(void)
{
    int n;

    cin >> n;

}