#include<iostream>
#include<algorithm>

using namespace std;

int fibonnacci(int n)
{
    if (n == 0 || n == 1)
    {
        return (1);
    }
    else
    {
        return (fibonnacci(n - 1) + fibonnacci(n - 2));
    }
}
int main(void)
{
    int sum = 0;
    int fibo = fibonnacci(0);
    for (int i = 0; i < 4000000; i++)
    {
        if (fibo % 2 == 0)
            sum += fibo;
        i++;
        fibo = fibonnacci(i);
    }
    cout << sum << "\n";
}