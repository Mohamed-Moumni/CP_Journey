#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

int main(void)
{
    int x,y,m;

    freopen("pails.in", "r", stdin);
    cin >> x >> y >> m;    
    int sol = 0;

    for (int i = 0; i <= m; i++)
    {
        if (i * x > m)
        {
            break ;
        }
        for (int j = 0; j <= m; j++)
        {
            int n = (i * x) + (j * y);
            if (n > m)
                break ;
            sol = max(sol, n);
        }
    }
    freopen("pails.out", "w", stdout);
    cout << sol << endl;
    return (0);
}