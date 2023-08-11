#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int n,m,a,b;

    cin >> n >> m >> a >> b;
    if (a * m <= b)
        cout << a * n << endl;
    else
    {
        cout << (n/m) * b + min((n%m) * a, b) << endl;
    }
    return (0);
}