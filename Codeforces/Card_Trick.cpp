#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void)
{
    long t;

    cin >> t;
    while (t--)
    {
        long long n,m,sum;
        sum = 0;
        cin >> n;
        vector<long long>vect1(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> vect1[i];
        }
        cin >> m;
        vector<long long> vect2(m);
        for (long long i = 0; i < m; i++)
        {
            cin >> vect2[i];
            sum += vect2[i];
        }
        cout << vect1[sum % n] << "\n";
    }
}