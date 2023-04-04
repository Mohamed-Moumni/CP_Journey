#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main(void)
{
    freopen("gymnastics.in", "r", stdin);
    int n,k;cin>> k >> n;
    int vect[k][n];
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vect[i][j];
            vect[i][j]--;
        }
    }
    int temp[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[i][j] = 0;
        }
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int h = j + 1; h < n; h++)
            {
                    temp[vect[i][j]][vect[i][h]]++;
            }
        }
    }
    int sol = 0;
    freopen("gymnastics.out", "w", stdout);
    for (int i =0;i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << temp[i][j] << " ";
            if (temp[i][j] == k)
                sol++;
        }
        // cout << endl;
    }
    cout << sol << endl;
    return (0);
}