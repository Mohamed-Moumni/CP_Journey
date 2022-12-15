#include<iostream>
#include<vector>
#include<stdio.h>

using namespace std;

int main(void)
{
    
    long long m,n,k;
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    cin >> m >> n >> k;
    vector<string> input(m);
    for (long long i = 0;i < m;i++)
    {
        cin >> input[i];
    }
    for (long long i = 0; i < m; i++)
    {
        for (int h = 0; h < k; h++)
        {
            for (long long j = 0; j < n;j++ )
            {
                for (int d = 0; d < k;d++)
                {
                    cout << input[i][j];
                }
            }
            cout << endl;
        }
        // cout << endl;
    }
    return (0);
}