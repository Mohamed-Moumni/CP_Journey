#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

#define nl "\n"
using namespace std;

int main(void)
{
    long long n,x;

    cin >> n >> x;
    map<long long, long long> vect;
    for (long long i = 0; i < n; i++)
    {
        long long value;
        cin >> value;
        if(vect.count(x - value))
        {
            cout << i + 1 << " " << vect[x - value] << "\n";
            return 0;
        }
        vect[value] = i + 1;
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}