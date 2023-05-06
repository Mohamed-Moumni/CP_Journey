#include<iostream>

using namespace std;

int main(void)
{
    long long i = 1;
    for (int j = 2; i <= 20; i++)
    {
        if (i % j)
            i *= j;
    }
    cout << i << endl;
    return (0);
}