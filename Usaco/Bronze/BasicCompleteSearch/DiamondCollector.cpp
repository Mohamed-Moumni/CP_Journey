#include <iostream>
#include <set>
#include <vector>
#include <utility>
#include <fstream>

using namespace std;

int main(void)
{
    long long n,k;
    freopen("diamond.in", "r", stdin);

    cin >> n >> k;
    vector<int> vect(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vect[i];
    }
    sort(vect.begin(), vect.end());
    int sol = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                if (vect[i] - )
            }
        }
        sol = max(sol, count); 
    }
    freopen("diamond.out", "w", stdout);
    cout << sol << endl;
    return (0);
}