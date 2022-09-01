#include <iostream>
#include <complex>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair <int,int> > vpi;
typedef vector<long long> vll;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;
#define F first
#define ln '\n'
#define S second
#define PB push_back
#define MP make_pair
#define B begin()
#define RB rbegin()
#define E end()
#define RE rend()
#define Z size()
#define REP(i,a,b) for (int i = a; i < b; i++)
#define L length()
#define valid(a,b,c) (a >= b && a < c ? 1 : 0)
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
const int mod = (int)1e9 + 7;

// My Solution

// signed main(void)
// {
//     vector<int> tab;
//     int a;
//     int sum = 0;
//     for (int i =0 ; i < 5; i++)
//     {
//         cin >> a;
//         sum += a;
//         tab.push_back(a);
//     }
//     sort(tab.begin(), tab.end());
//     int i,j, c,d;
//     c = 0;
//     d = 0;
//     i = 0;
//     j = 4;
//     while (i < j)
//     {
//         if (i + 1 < 5 && tab[i] == tab[i + 1])
//         {
//             if (tab[i] * 2 >= c)
//             {
//                 c = tab[i] * 2;
//                 if (i + 2 < 5 && tab[i + 1] == tab[i +2])
//                 {
//                     c += tab[i];
//                 }
//             }
//         }
//         if (j - 1 >= 0 && tab[j] == tab[j - 1])
//         {
//             if (tab[j] * 2 >= d)
//             {
//                 d = tab[j] * 2;
//                 if (j - 2 >= 0 && tab[j - 1] == tab[j - 2])
//                 {
//                     d += tab[j];
//                 }
//             } 
//         }
//         i++;
//         j--;
//     }
//     if (c >= d)
//         cout << sum - c << endl;
//     else
//         cout << sum - d << endl;
// }

// second and optimal solution

signed main(void)
{
	int a[6];
	int count[102] = {0};

	for (int i = 1; i <= 5; i++)
	{
		cin >> a[i];
		count[a[i]]++;
	}
	int ans = 0;
	for (int i = 1; i <= 5; i++)
	{
		if (count[a[i]] >= 3)
			ans = min(ans, -a[i] * 3);
		if (count[a[i]] >= 2)
			ans = min(ans, -a[i] * 2);
	}
	for (int i = 1; i<=5; i++)
		ans += a[i];
	cout << ans << endl;
}