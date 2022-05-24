#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

# define nl "\n"

int main (void)
{
    long t;

    cin >> t;
    while (t--)
    {
        long n,m,max1,max2;
        max1 = 0;
        max2 = 0;
        cin >> n;
        vector<long> vect(n);
        for (long i = 0; i < n; i++)
        {
            cin >> vect[i];
            if (vect[i] > max1)
                max1 = vect[i];
        }
        cin >> m;
        vector<long> vect1(m);
        for (long i = 0; i < m; i++)
        {
            cin >> vect1[i];
            if (vect1[i] > max2)
                max2 = vect1[i];
        }
        if (max1 > max2)
        {
            cout << "Alice\nAlice\n";
        }
        else if (max1 < max2)
        {
            cout << "Bob\nBob\n";
        }
        else
        {
            cout << "Alice\nBob\n";
        }
    }
    return (0);
}