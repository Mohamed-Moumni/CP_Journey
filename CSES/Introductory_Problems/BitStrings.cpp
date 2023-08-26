#include<iostream>
#include<cmath>

using namespace std;

#define M 1000000007

int main(void)
{
    long n;cin>>n;
    long res = 1;

    for (int i = 0; i < n; i++)
    {
        res = (res * 2) % M;
    }
    cout << res << endl;
    return (0);
}
