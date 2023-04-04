#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;


int main(void)
{
    int n;cin>>n;
    vector<int> vect(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vect[i];
    }
    int sol = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            double avr = 0;
            for (int k = i; k <= j; k++)
            {
                avr += vect[k];
            }
            avr /= (j - i + 1);
            for (int h = i; h <= j; h++)
            {
                if (vect[h] == avr)
                {
                    sol++;
                    break ;
                }
            }
        }
    }
    cout << sol << endl;
}