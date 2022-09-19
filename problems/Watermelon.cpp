#include<iostream>

using namespace std;

int main(void)
{
    int n;cin>>n;
    int rem = n % 2;
    if (n == 2)
    {
        cout << "NO" << "\n";
    }
    else
    {
    if (n%2==0)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
    }
    return (0);
}