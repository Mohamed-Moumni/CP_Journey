#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

#define nl "\n"
using namespace std;

// First Solution With Map
// int main(void)
// {
//     long long n,x;

//     cin >> n >> x;
//     map<long long, long long> vect;
//     for (long long i = 0; i < n; i++)
//     {
//         long long value;
//         cin >> value;
//         if(vect.count(x - value))
//         {
//             cout << i + 1 << " " << vect[x - value] << "\n";
//             return 0;
//         }
//         vect[value] = i + 1;
//     }
//     cout << "IMPOSSIBLE\n";
//     return 0;
// }

// Second Solution With Two pointer method

int main(void)
{
    long long n,x;
    vector<long long> tab;

    cin >> n >> x;
    long long a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        tab.push_back(a);
    }
    long i;
    long j;

    i = 0;
    j = n - 1;
    if (n < 2)
    {
        cout << "IMPOSSIBLE" << endl;
        return (0);
    }
    while (i < j)
    {
        if (tab[i] + tab[j] == x)
            break ;
        if (tab[i] + tab[j] < x)
            i++;
        else
            j--;
    }
    if (i == j)
    {
        cout << "IMPOSSIBLE" << endl;
        return (0);
    }
    cout << (i+1) << " " <<  (j+ 1) << endl; 
}